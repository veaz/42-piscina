/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 18:52:22 by vaguilar          #+#    #+#             */
/*   Updated: 2021/10/31 18:52:27 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	rush(int x, int y)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (b < y)
	{
		while (a < x)
		{
			if ((a == 0 && b == 0) || (a == (x - 1) && b == (y - 1)))
				ft_putchar('/');
			else if (((a == 0) && b == (y - 1)) || (a == (x - 1) && (b == 0)))
				ft_putchar('\\');
			else if (a == 0 || a == (x - 1) || b == 0 || b == (y - 1))
				ft_putchar('*');
			else
				ft_putchar(' ');
			a = a + 1;
		}
		a = 0;
		ft_putchar('\n');
		b++;
	}
	return (0);
}
