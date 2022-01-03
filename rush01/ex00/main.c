/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:14:54 by vaguilar          #+#    #+#             */
/*   Updated: 2021/11/07 21:14:57 by vaguilar         ###   ########          */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rascacielos.h"

int	imprimir_cuadricula(char cuadricula[TAMANYO][TAMANYO])
{
	int	x;
	int	y;

	y = -1;
	while (++y < TAMANYO)
	{
		x = -1;
		while (++x < TAMANYO)
		{
			write(1, &cuadricula[y][x], 1);
			if (x != (TAMANYO - 1))
				write(1, " ", 1);
		}
		write(1, "\n", 1);
	}
	return (1);
}

int	solucionar(char cuadricula[TAMANYO][TAMANYO], t_parametros *parametros)
{
	int	x;
	int	y;
	int	valor;

	if (buscar_caso_vacio(cuadricula, &x, &y))
	{
		valor = '0';
		while (++valor <= (TAMANYO + '0'))
		{
			if (poner_valor(cuadricula, x, y, valor))
			{
				cuadricula[y][x] = valor;
				if (x == (TAMANYO - 1) && !fila_es_valida(cuadricula, parametros, y))
					continue ;
				if (y == (TAMANYO - 1) && !columna_es_valida(cuadricula, parametros, x))
					continue ;
				if (solucionar(cuadricula, parametros) == 1)
					return (1);
			}
		}
		cuadricula[y][x] = 0;
		return (0);
	}
	return (1);
}

int	argumento_es_valido(char *av, t_parametros *parametros)
{
	int	i = -1;
	char *ptr_parametros = &parametros->arriba[0];

	while (av[++i] != '\0')
	{
		if (i % 2 != 0 && av[i] == ' ')
			continue;
		if (i % 2 != 0 && av[i] != ' ')
			return (0);
		if (i % 2 == 0 && !(av[i] >= '1' && av[i] <= (TAMANYO + '0')))
			return (0);
		*ptr_parametros = av[i] - '0';
		ptr_parametros++;
	}
	if (TAMANYO == 4 && i != 31)
		return (0);
	return (1);
}

int	main(int ac, char **av)
{
	t_parametros parametros;
	char	cuadricula[TAMANYO][TAMANYO];
	int	i = -1;
	int	j;

	if (ac != 2 || !argumento_es_valido(av[1], &parametros)) 
	{
		write(1, "Error\n", 6);
		return (0);
	}
	while (++i < TAMANYO) 
	{
		j = -1;
		while (++j < TAMANYO)
		{
			cuadricula[i][j] = 0;
		}
	}
	if (!solucionar(cuadricula, &parametros))
	{
		write(1, "Error\n", 6);
		return (0);
	}

	imprimir_cuadricula(cuadricula);
	return (1);
}
