/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyelee <leesy0159@naver.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 12:52:32 by soyelee           #+#    #+#             */
/*   Updated: 2020/07/08 17:28:51 by soyelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char *temp;

	temp = dest;
	while (n != 0 && *src)
	{
		*temp++ = *src++;
		n--;
	}
	while (n-- != 0)
		*temp++ = '\0';
	return (dest);
}
