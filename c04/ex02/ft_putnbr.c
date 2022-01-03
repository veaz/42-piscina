/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 12:10:03 by vaguilar          #+#    #+#             */
/*   Updated: 2021/11/17 15:36:13 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int a)
{
	if (a == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (a < 0)
	{
		ft_putchar('-');
		a = -a;
	}
	if (a > 9)
		ft_putnbr(a / 10);
	ft_putchar(a % 10 + '0');
}
