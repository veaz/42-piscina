/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 11:04:43 by vaguilar          #+#    #+#             */
/*   Updated: 2021/11/15 12:16:52 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	c;
	int	temp;

	c = 0;
	temp = 1;
	while (str[c])
	{
		if ((str[c] > 64 && str[c] < 91)
			|| (str[c] > 96 && str[c] < 123)
			|| (str[c] > 47 && str[c] < 58))
		{
			if ((str[c] > 96 && str[c] < 123) && temp)
				str[c] = str[c] - 32;
			else if ((str[c] > 64 && str[c] < 91) && !temp)
				str[c] = str[c] + 32;
			temp = 0;
		}
		else
			temp = 1;
		c++;
	}
	return (str);
}
