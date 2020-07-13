/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyelee <leesy0159@naver.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 18:23:37 by soyelee           #+#    #+#             */
/*   Updated: 2020/07/09 13:30:15 by soyelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	char *temp;

	temp = str;
	while (*temp)
	{
		if (97 <= *temp && *temp <= 122)
			*temp -= 32;
		temp++;
	}
	return (str);
}
