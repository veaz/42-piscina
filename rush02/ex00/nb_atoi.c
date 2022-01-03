/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 03:21:03 by arebelo           #+#    #+#             */
/*   Updated: 2021/11/14 05:06:50 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "lib.h"

void	number_sep(char *dict, char	*nb)
{
	unsigned int	length;
	unsigned int	counter;

	length = ft_strlen(nb);
	counter = 0;
	while (nb[counter])
	{
		if ((length - counter) % 3 == 1 && length > 3 && counter != length - 1)
		{
			print_mill(dict, nb[counter], counter, length);
			counter++;
		}	
		else if ((length - counter) % 3 == 0)
		{
			print_centenas(dict, nb[counter], counter);
			counter++;
		}
		else if ((length - counter) % 3 == 2)
		{
			print_decenas(dict, nb[counter], counter);
			counter++;
		}
		else if ((length - counter) % 3 == 1)
		{
			print_unidades(dict, nb[counter], counter);
			counter++;
		}
	}
}

void	print_mill(char *dict, char c, unsigned int counter, unsigned int length)
{	
	char			*nb_to_search;
	char			nb[2];
	unsigned int	i;

	i = 1;
	nb_to_search = malloc(length - counter);
	nb_to_search[0] = '1';
	while (i < length - counter)
	{
		nb_to_search[i] = '0';
		i++;
	}
	nb_to_search[i] = '\0';
	nb[0] = c;
	if (nb[0] != '0')
	{
		if (counter != 0)
			write(1, " ", 1);
		ft_strstr(dict, nb);
	}
	write (1, " ", 1);
	ft_strstr(dict, nb_to_search);
	free(nb_to_search);
}

void	print_centenas(char *dict, char c, unsigned int counter)
{
	char	*nb_to_search;
	char	nb[2];

	nb_to_search = "100";
	nb[0] = c;
	if (nb[0] != '0')
	{
		if (counter != 0)
			write (1, " ", 1);
		ft_strstr(dict, nb);
	}
	write (1, " ", 1);
	ft_strstr(dict, nb_to_search);
}

void	print_decenas(char *dict, char c, unsigned int counter)
{
	char	nb_to_search[3];

	if (c != '0')
	{	
		if (counter != 0)
			write (1, " ", 1);
		nb_to_search[0] = c;
		nb_to_search[1] = '0';
		ft_strstr(dict, nb_to_search);
	}
}

void	print_unidades(char *dict, char c, unsigned int counter)
{
	char	nb[2];

	nb[0] = c;
	if (nb[0] != '0')
	{
		if (counter != 0)
			write (1, " ", 1);
		ft_strstr(dict, nb);
	}
}
