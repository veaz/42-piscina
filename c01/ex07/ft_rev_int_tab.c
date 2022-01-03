/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 15:28:42 by vaguilar          #+#    #+#             */
/*   Updated: 2021/11/09 11:40:00 by vaguilar         ###   ########          */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	temporal;

	a = 0;
	b = size - 1;
	while (a < (size / 2))
	{
		temporal = tab[a];
		tab[a] = tab[b];
		tab[b] = temporal;
		a++;
		b--;
	}
}
