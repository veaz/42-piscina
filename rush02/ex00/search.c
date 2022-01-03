/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 21:21:44 by arebelo           #+#    #+#             */
/*   Updated: 2021/11/14 01:52:34 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "lib.h"

_Bool	ft_strstr(char *str, char *to_find)
{
	unsigned int	counter;

	counter = 0;
	while (str[counter])
	{
		if (ft_strncmp(&str[counter], to_find, ft_strlen(to_find)) == 0)
		{
			ft_print(&str[counter]);
			return (1);
		}
		while (str[counter] != '\n' && str[counter])
			counter++;
		counter++;
	}
	return (0);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int		a;

	a = 0;
	while (str[a])
		a++;
	return (a);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (s1[counter] == s2[counter] && s1[counter] && counter < n - 1)
		counter ++;
	return (s1[counter] - s2[counter]);
}
