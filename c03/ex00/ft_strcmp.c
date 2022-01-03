/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 22:02:56 by vaguilar          #+#    #+#             */
/*   Updated: 2021/11/15 20:57:23 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned char	a;
	unsigned char	b;

	while (*s1 != '\0' && *s2 == *s1)
	{
		s1++;
		s2++;
	}
	a = (unsigned char)*s1;
	b = (unsigned char)*s2;
	return (a - b);
}
