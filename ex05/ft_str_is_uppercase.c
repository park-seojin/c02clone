/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyelee <leesy0159@naver.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 17:53:38 by soyelee           #+#    #+#             */
/*   Updated: 2020/07/08 17:57:02 by soyelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (!('A' <= *str && *str <= 'Z'))
			break ;
		str++;
	}
	if (*str)
		return (0);
	else
		return (1);
}
