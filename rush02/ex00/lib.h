/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 21:32:16 by arebelo           #+#    #+#             */
/*   Updated: 2021/11/14 03:36:52 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>   //REMOVE
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

unsigned int	ft_strlen(char *str);

int				ft_strncmp(char *s1, char *s2, unsigned int n);

_Bool			ft_strstr(char *str, char *to_find);

void			ft_print(char *str);

_Bool			ft_is_number(char c);

_Bool			ft_is_printable(char c);

void			dict_create(char *str);

unsigned int	ft_file_length(char *str);

void			number_sep(char *dict, char *nb);

void			print_mill(char	*dict, char c, unsigned int counter, unsigned int length);

void			print_centenas(char	*dict, char c, unsigned int counter);

void			print_decenas(char *dict, char c, unsigned int counter);

void			print_unidades(char *dict, char c, unsigned int counter);

_Bool           verification_dict(char *dict);