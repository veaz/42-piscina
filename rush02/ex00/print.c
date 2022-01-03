/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 21:10:57 by arebelo           #+#    #+#             */
/*   Updated: 2021/11/13 21:31:46 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "lib.h"

void	ft_print(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (ft_is_number(str[counter]) && str[counter])
		counter++;
	while (str[counter] == ' ')
		counter++;
	while (str[counter] == ':')
		counter++;
	while (str[counter] == ' ')
		counter++;
	while (ft_is_printable(str[counter]))
	{
		write(1, &str[counter], 1);
		counter++;
	}
}

_Bool	ft_is_number(char c)
{
	if (c > 47 && c < 58)
		return (1);
	return (0);
}

_Bool	ft_is_printable(char c)
{
	if (c > 31 && c < 127)
		return (1);
	return (0);
}
