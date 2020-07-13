/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyelee <leesy0159@naver.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 14:32:15 by soyelee           #+#    #+#             */
/*   Updated: 2020/07/09 17:43:35 by soyelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int index;

	index = 0;
	while (*src && (index + 1 < size))
	{
		*dest++ = *src++;
		index++;
	}
	while (*src++)
		index++;
	if (size != 0)
		*dest = '\0';
	return (index);
}
