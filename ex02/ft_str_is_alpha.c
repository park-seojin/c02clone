/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyelee <leesy0159@naver.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 17:31:22 by soyelee           #+#    #+#             */
/*   Updated: 2020/07/09 19:50:43 by soyelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!('a' <= *str && *str <= 'z'))
			break ;
		else if (!('A' <= *str && *str <= 'Z'))
			break ;
		str++;
	}
	if (*str)
		return (0);
	else
		return (1);
}
