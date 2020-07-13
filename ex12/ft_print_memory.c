/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyelee <leesy0159@naver.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/13 11:51:35 by soyelee           #+#    #+#             */
/*   Updated: 2020/07/13 14:34:48 by soyelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char g_hex[16] = "0123456789abcdef";

void	ft_print_addr(unsigned long long addr, int count)
{
	if (addr == 0)
	{
		while (count-- != 0)
			write(1, "0", 1);
		return ;
	}
	ft_print_addr(addr / 16, count - 1);
	write(1, &g_hex[addr % 16], 1);
}

void	ft_print_hex(void *addr, int size)
{
	int		ary[3];

	ary[0] = 0;
	ary[1] = 0;
	if (size > 16)
		ary[2] = 16;
	else
		ary[2] = size % 16;
	while (ary[0]++ < 16 && --ary[2] >= 0)
	{
		write(1, &g_hex[*(char*)addr / 16], 1);
		write(1, &g_hex[*(char*)addr++ % 16], 1);
		ary[1]++;
		if (ary[1] % 2 == 0)
			write(1, " ", 1);
	}
	ary[0]--;
	while (ary[0]++ < 16)
	{
		write(1, "  ", 2);
		ary[1]++;
		if (ary[1] % 2 == 0)
			write(1, " ", 1);
	}
}

void	ft_print_char(void *addr, int size)
{
	int	count;
	int	temp_size;

	count = 0;
	if (size >= 16)
		temp_size = 16;
	else
		temp_size = size % 16;
	while (count++ < 16 && --temp_size >= 0)
	{
		if ((32 <= *(char*)addr) && (*(char*)addr <= 126))
			write(1, (char *)addr, 1);
		else
			write(1, ".", 1);
		addr++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	void	*temp;
	int		sign_size;

	temp = addr;
	sign_size = size;
	while (sign_size > 0)
	{
		ft_print_addr((unsigned long long)temp, 16);
		write(1, ": ", 2);
		ft_print_hex(temp, sign_size);
		ft_print_char(temp, sign_size);
		write(1, "\n", 1);
		sign_size -= 16;
		temp += 16;
	}
	return (addr);
}
