/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unidades.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 23:10:25 by arebelo           #+#    #+#             */
/*   Updated: 2021/11/14 23:37:10 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

unsigned int	ft_strlen(char *str);

int				ft_strncmp(char *s1, char *s2, unsigned int n);

_Bool			ft_strstr(char *str, char *to_find);

void			ft_print(char *str);

_Bool			ft_is_number(char c);

_Bool			ft_is_printable(char c);

void			dict_create(char *str);

unsigned int	ft_file_length(char *str);

void			number_sep(char *dict, char *nb);

void			print_mill(char	*dict, char *num,
					unsigned int counter, unsigned int length);

void			print_centenas(char	*dict, char c, unsigned int counter);

void			print_decenas(char *dict, char *num, unsigned int *counter);

void			print_unidades(char *dict, char *c, unsigned int counter);

void			trim(char *str);

_Bool			isnumber_p(char argv[]);

_Bool			verification_dict(char *dict);

unsigned int	ft_atoi_u(char *str);

void	print_unidades(char *dict, char *c, unsigned int counter)
{
	char	nb[2];

	nb[0] = c[counter];
	nb[1] = '\0';
	if (nb[0] != '0')
	{
		if (counter != 0)
			write (1, " ", 1);
		ft_strstr(dict, nb);
	}
	if (c[0] == '0')
		ft_strstr(dict, nb);
}
