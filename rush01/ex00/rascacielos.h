/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rascacielos.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 21:15:37 by vaguilar          #+#    #+#             */
/*   Updated: 2021/11/07 21:16:52 by vaguilar         ###   ########          */
/*                                                                            */
/* ************************************************************************** */

#ifndef	RASCACIELOS_H

#define	RASCACIELOS_H
#define	TAMANYO 4

typedef	struct s_parametros {
	char	arriba[TAMANYO];
	char	abajo[TAMANYO];
	char	izquierda[TAMANYO];
	char	derecha[TAMANYO];
} t_parametros;

int	argumento_es_valido(char *av, t_parametros *parametros);
int	solucionar(char cuadricula[TAMANYO][TAMANYO], t_parametros *parametros);
int	buscar_caso_vacio(char cuadricula[TAMANYO][TAMANYO], int *x, int *y);
int	poner_valor(char cuadricula[TAMANYO][TAMANYO], int x, int y, int valor);
int	fila_es_valida(char cuadricula[TAMANYO][TAMANYO], t_parametros *parametros, int y);
int	columna_es_valida(char cuadricula[TAMANYO][TAMANYO], t_parametros *parametros, int x);
int	imprimir_cuadricula(char cuadricula[TAMANYO][TAMANYO]);

#endif
