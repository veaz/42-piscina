/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 21:42:32 by vaguilar          #+#    #+#             */
/*   Updated: 2021/11/15 21:42:40 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_get_base(char *base)
{
	int	x;
	int	j;

	x = 0;
	while (base[x] != '\0')
	{
		j = x + 1;
		if (base[x] == '+' || base[x] == '-')
			return (0);
		while (base[j] == '\0')
		{
			if (base[x] == base[j])
				return (0);
			j++;
		}
		x++;
	}
	if (x < 2)
		return (0);
	return (x);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	size;
	unsigned int	nb;

	size = ft_get_base(base);
	if (size == 0)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		nb = nbr * -1;
	}
	else
		nb = nbr;
	if (nb >= size)
	{
		ft_putnbr_base(nb / size, base);
		ft_putchar(base[nb % size]);
	}
	else
		ft_putchar(base[nb % size]);
}


/////////


#include <unistd.h>

void ft_putstr(char *str)
{
char *charptr;

charptr = str;
while (*charptr != 0)
{
  write(1, charptr, 1);
  charptr++;
}
write(1, " ", 1);
return ;
}

int ft_strcmp(char *s1, char *s2)
{
int n;

n = 0;
while (s1[n] && s1[n] == s2[n])
  n++;
return (s1[n] - s2[n]);
}

void ft_sort_tab(char *tab[], int size)
{
int  i;
int  j;
char *temp;

i = 1;
while (i < size)
{
  j = i + 1;
  while (j < size)
  {
   if (ft_strcmp(tab[j], tab[i]) < 0)
   {
    temp = tab[i];
    tab[i] = tab[j];
    tab[j] = temp;
   }
   j++;
  }
  i++;
}
return ;
}

int main(int argc, char *argv[])
{
int n;

n = 1;
ft_sort_tab(argv, argc);
while (n <= argc - 1)
  ft_putstr(argv[n++]);
return (0);
}