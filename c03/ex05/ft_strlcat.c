/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 22:02:56 by vaguilar          #+#    #+#             */
/*   Updated: 2021/11/15 21:39:35 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	counter(char *ptr)
{
	int	c;

	c = 0;
	while (ptr[c] != '\0')
	{
		c++;
	}
	return (c);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	int				b;
	int				c;
	int				retorno;

	a = 0;
	c = counter(src);
	b = counter(dest);
	b++;
	while (a < (size - 1))
	{
		dest[b] = src[a];
		a++;
		b++;
	}
	retorno = b + c;
	return (retorno);
}
