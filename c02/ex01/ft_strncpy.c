/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 12:27:00 by vaguilar          #+#    #+#             */
/*   Updated: 2021/11/13 13:09:45 by vaguilar         ###   ########          */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (*(src + i) != '\0')
			*(dest + i) = *(src + i);
		else
		{
			while (i < n)
			{
				*(dest + i) = '\0';
				i++;
			}
		}
		i++;
	}
	return (dest);
}
