/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyelee <leesy0159@naver.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 17:50:48 by soyelee           #+#    #+#             */
/*   Updated: 2020/07/08 17:52:07 by soyelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (!('a' <= *str && *str <= 'z'))
			break ;
		str++;
	}
	if (*str)
		return (0);
	else
		return (1);
}
