/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 12:39:53 by vaguilar          #+#    #+#             */
/*   Updated: 2021/11/18 13:37:36 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *str)
{
	int		x;
	char	c;

	x = 0;
	while (str[x] != '\0')
	{
		c = str[x];
		write (1, &c, 1);
		x++;
	}
	write (1, "\n", 1);
}

int	main(int argv, char **argc)
{
	int	x;

	x = argv - 1;
	while (x >= 1)
	{
		ft_putchar(argc[x]);
		x--;
	}
	return (0);
}
