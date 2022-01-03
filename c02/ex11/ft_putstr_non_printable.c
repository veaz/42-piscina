/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 11:06:39 by vaguilar          #+#    #+#             */
/*   Updated: 2021/11/16 13:49:00 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_hex(char nb);

void	ft_putstr_non_printable(char *str)
{
	char	cha;
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
		{
			cha = str[i];
			write(1, &cha, 1);
		}
		if (str[i] < 32 || str[i] > 126)
		{
			ft_hex(str[i]);
		}
		i++;
	}
}

void	ft_hex(char c)
{
	unsigned char	uc;
	char			*hex;
	char			a;
	char			b;

	hex = "0123456789abcdef";
	uc = (unsigned char) c;
	a = hex[uc / 16];
	b = hex[uc % 16];
	write (1, "\\", 1);
	write (1, &a, 1);
	write (1, &b, 1);
}
