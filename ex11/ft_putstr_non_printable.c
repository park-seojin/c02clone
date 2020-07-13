/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyelee <leesy0159@naver.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 15:58:45 by soyelee           #+#    #+#             */
/*   Updated: 2020/07/13 14:32:31 by soyelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str);

void	ft_putstr_non_printable(char *str)
{
	char	*hex;

	hex = "0123456789abcdef";
	while (*str)
	{
		if ((*str < 32) || (126 < *str))
		{
			write(1, "\\", 1);
			write(1, &hex[*str / 16], 1);
			write(1, &hex[*str % 16], 1);
		}
		else
			write(1, str, 1);
		str++;
	}
}
