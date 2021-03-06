/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verification_dict.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcelo>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 23:05:54 by vaguilar          #+#    #+#             */
/*   Updated: 2021/11/14 23:33:51 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "lib.h"

void	ft_rule1(char *str, int *j);
void	ft_rule2(char *str, int *j);

_Bool	verification_dict(char *dict)
{
	int	i;
	int	*ptr_i;

	ptr_i = &i;
	i = 0;
	while (dict[i] != '\0')
	{
		if (dict[i] >= '0' && dict[i] <= '9')
		{
			while (dict[i] >= '0' && dict[i] <= '9')
			{
				i++;
			}
		}
		ft_rule1(dict, ptr_i);
		ft_rule2(dict, ptr_i);
	}
	return (1);
}

void	ft_rule1(char *str, int *j)
{
	while (str[*j] == 32)
	{
		++(*j);
	}
	if (str[*j] != ':')
	{
		write(2, "Dict Error\n", 11);
		return ;
	}
	else
	{
		++(*j);
	}
}

void	ft_rule2(char *str, int *j)
{
	while (str[*j] >= 32 && str[*j] <= 126)
	{
		++(*j);
	}
	if (str[*j] != '\n')
	{
		write(2, "Dict Error\n", 11);
		return ;
	}
	else
	{
		++(*j);
	}
}
