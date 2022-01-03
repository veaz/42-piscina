/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verification_map.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguilar <vaguilar@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 20:18:36 by vaguilar          #+#    #+#             */
/*   Updated: 2021/11/17 20:34:11 by vaguilar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

struct cmp {
	int cont_c2;
	int f1;
	int f2;
	int x;

};
typedef struct cmp cmp;

#include <stdio.h>

int	ft_verification_map(char *str, char c1, char c2, cmp *var);
int	ft_file2(char *str, int x, char c1, char c2);
int	ft_characters(char *str, char *c1, char *c2, char *c3);
int	ft_verification_char(char c1, char c2, char c3);//Agregado
int	ft_cont_char_line(char *str, int *x);
int	ft_linelen(char *str, int *x, char c2, cmp *var);// ptr_cont_c2 eliminado
void ft_value_var(void);

int	main(void)
{
	char	map[] = "10.ox\n..........\n..........\n.....o....\n..o.......\n.....o....\n.......o..\n......o..o\n..........\n..........\n..........\n";
	char	c1;
	char	c2;
	char	c3;
	char	*ptrc1;
	char	*ptrc2;
	char	*ptrc3;
	cmp		pvar;
	cmp		*var;

	var = &pvar;
	ptrc1 = &c1;
	ptrc2 = &c2;
	ptrc3 = &c3;
	if (ft_characters(map, ptrc1, ptrc2, ptrc3) == 0 || ft_verification_char(c1, c2, c3) == 0)
	{
		printf("map error");
		return (0);
	}

	printf("Valor c1 = %c\n", c1);
	printf("Valor c2 = %c\n", c2);
	printf("Valor c3 = %c\n\n", c3);
	printf("El valor retornado es = %d\n", ft_verification_map(map, c1, c2, var));
}

int	ft_characters(char *str, char *c1, char *c2, char *c3)
{
	int	rule;
	int	x;

	rule = 0;
	x = 0;
	while (str[x] != '\n')
	{
		if (str[x] >= '0' && str[x] <= '9')
			x++;
		else if (rule == 0)
		{
			*c1 = str[x];
			rule++;
		}
		else if (rule == 1)
		{
			*c2 = str[x];
			rule++;
		}
		else if (rule == 2)
			*c3 = str[x];
		else if (str[x] != '\n')
			return (0);
		x++;
	}
	return (1);
}

int	ft_verification_char(char c1, char c2, char c3)
{
	if (c1 == c2 || c1 == c3 || c2 == c3)
		return (0);
	else if (c1 == '0' || c1 == '0' || c2 == '0')
		return (0);
	else
		return (1);
}

int	ft_verification_map(char *str, char c1, char c2, cmp *var)
{
	ft_value_var();

	printf("test %d\n", var->x);
	while (str[var->x] != '\n')
		var->x++;
	var->x++;
	while (str[var->x] != '\0')
	{
		if (var->f1 == 0)
			var->f1 = ft_linelen(str, c2, var);
		if (var->f1 > 0 && f2 == 0)
		{
			var->f2 = ft_linelen(str, c2, var);
			if (var->f1 != var->f2)
				return (0);
			var->f2 = 0;
		}
	}
	if (var->cont_c2 == 0)
		return (0);
	return (x);
}

cmp *ft_value_var(void)//////?
{
	cmp = var;
	var.x = 0;
	var.f1 = 0;
	var.f2 = 0;
	var.cont_c2 = 0;
	return(&var)
}

int	ft_linelen(char *str, char c2, cmp *var)
{
	int	i;

	i = 0;
	while (str[var->x] != '\n')
	{
		if (str[var->x] == c2)
			var->cont_c2 = var->cont_c2 + 1;
		var->x = var->x + 1;
		i++;
	}
	if (str[var->x] == '\n')
		var->x = var->x + 1;
	return (i);
}
