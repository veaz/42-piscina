/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:51:56 by vaguilar          #+#    #+#             */
/*   Updated: 2021/11/09 11:43:42 by vaguilar         ###   ########          */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int		min;
	int		a;
	int		k;
	int		m;

	a = 0;
	k = 0;
	m = 0;
	min = 0;
	while (a < size)
	{
		k = a;
		while (k < size)
		{
			if (*(tab + k) < min || k == a)
			{
				min = *(tab + k);
				m = k;
			}
			k++;
		}
		*(tab + m) = *(tab + a);
		*(tab + a) = min;
		a++;
	}
}
