/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyelee <leesy0159@naver.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 18:23:37 by soyelee           #+#    #+#             */
/*   Updated: 2020/07/09 13:30:06 by soyelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	char *temp;

	temp = str;
	while (*temp)
	{
		if (65 <= *temp && *temp <= 90)
			*temp += 32;
		temp++;
	}
	return (str);
}
