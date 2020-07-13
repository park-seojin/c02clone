/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyelee <leesy0159@naver.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 17:43:34 by soyelee           #+#    #+#             */
/*   Updated: 2020/07/08 17:47:47 by soyelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (!('0' <= *str && *str <= '9'))
			break ;
		str++;
	}
	if (*str)
		return (0);
	else
		return (1);
}
