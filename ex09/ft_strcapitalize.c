/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyelee <leesy0159@naver.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 13:26:10 by soyelee           #+#    #+#             */
/*   Updated: 2020/07/09 14:31:08 by soyelee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str);
int		check_check(char *temp);

char	*ft_strcapitalize(char *str)
{
	char	*temp;
	int		check;

	temp = str - 1;
	check = 1;
	while (*++temp)
	{
		if (check_check(temp))
			check = 1;
		else
		{
			if (check == 1)
			{
				if ((96 < *temp) && (*temp < 123))
					*temp -= 32;
				check = 0;
			}
			else
			{
				if ((64 < *temp) && (*temp < 91))
					*temp += 32;
			}
		}
	}
	return (str);
}

int		check_check(char *temp)
{
	if ((*temp < 48) || (122 < *temp))
		return (1);
	else if ((57 < *temp) && (*temp < 65))
		return (1);
	else if ((90 < *temp) && (*temp < 97))
		return (1);
	else
		return (0);
}
