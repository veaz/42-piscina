/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 12:27:00 by vaguilar          #+#    #+#             */
/*   Updated: 2021/11/13 15:02:18 by vaguilar         ###   ########          */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *src)
{
	int	i;

	i = 0;
	if (*src == '\0')
		return (1);
	while (*(src + i) != '\0')
	{
		if (*(src + i) < 'A' || (*(src + i) > 'Z'
				&& *(src + i) < 'a') || *(src + i) > 'z')
			return (0);
		i++;
	}
	return (1);
}