/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comprobar.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:17:09 by vaguilar          #+#    #+#             */
/*   Updated: 2021/11/07 21:23:36 by vaguilar         ###   ########          */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "rascacielos.h"

int	columna_es_valida(char cuadricula[TAMANYO][TAMANYO], t_parametros *parametros, int x)
{
	int	i;
	int	tamanyo_maximo;
	int	vistas;

	i = -1;
	tamanyo_maximo = 0;
	vistas = 0;
	while (++i < TAMANYO)
	{
		vistas += cuadricula[i][x] > tamanyo_maximo;
		tamanyo_maximo = ((cuadricula[i][x] > tamanyo_maximo) ? cuadricula[i][x] : tamanyo_maximo);
	}
	if (vistas != parametros->arriba[x])
		return (0);
	tamanyo_maximo = 0;
	vistas = 0;
	while (--i >= 0)
	{
		vistas += cuadricula[i][x] > tamanyo_maximo;
		tamanyo_maximo = ((cuadricula[i][x] > tamanyo_maximo) ? cuadricula[i][x] : tamanyo_maximo);
	}
	if (vistas != parametros->abajo[x])
		return (0);
	return (1);
}

int	fila_es_valida(char cuadricula[TAMANYO][TAMANYO], t_parametros *parametros, int y)
{
	int	i;
	int	tamanyo_maximo;
	int	vistas;

	i = -1;
	tamanyo_maximo = 0;
	vistas = 0;
	while (++i < TAMANYO)
	{
		vistas += cuadricula[y][i] > tamanyo_maximo;
		tamanyo_maximo = ((cuadricula[y][i] > tamanyo_maximo) ? cuadricula[y][i] : tamanyo_maximo);
	}
	if (vistas != parametros->izquierda[y])
		return (0);
	tamanyo_maximo = 0;
	vistas = 0;
	while (--i >= 0)
	{
		vistas += cuadricula[y][i] > tamanyo_maximo;
		tamanyo_maximo = ((cuadricula[y][i] > tamanyo_maximo) ? cuadricula[y][i] : tamanyo_maximo);
	}
	if (vistas != parametros->derecha[y])
		return (0);
	return (1);
}

int	poner_valor(char cuadricula[TAMANYO][TAMANYO], int x, int y, int valor)
{
	int	i;

	i = -1;
	while (++i < TAMANYO)
		if (cuadricula[y][i] == valor || cuadricula[i][x] == valor)
			return (0);
	return (1);
}

int	buscar_caso_vacio(char cuadricula[TAMANYO][TAMANYO], int *x, int *y)
{
	int	i;
	int	j;

	i = -1;
	while (++i < TAMANYO)
	{
		j = -1;
		while (++j < TAMANYO)
			if (cuadricula[i][j] == 0)
			{
				*x = j;
				*y = i;
				return (1);
			}
	}
	return (0);
}
