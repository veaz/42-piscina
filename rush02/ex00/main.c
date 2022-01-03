/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arebelo <arebelo@student.42barcelona.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 01:30:20 by arebelo           #+#    #+#             */
/*   Updated: 2021/11/14 02:50:32 by arebelo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	main(int argc, char **argv)
{
	int		holder;
	int		length;
	char	*dict;
	int		i;
	int		buff[1];

	if (argc == 3)
	{
		
		// Fills the dictionary array
		holder = open((char *)argv[2], O_RDONLY);
		if (holder == -1)
		{
			write(2, &"Error\n", 6);
			return (1);
		}
		length = ft_file_length(argv[2]);
		dict = (char *)malloc(length + 1);
		i = 0;
		while (read(holder, buff, 1))
		{
			dict[i] = buff[0];
			i++;
		}
		dict[i] = '\0';
		close(holder);
	
		//Searches for number and prints result	
//		ft_strstr(dict, argv[1]);

		// Seperates number into parts
		number_sep(dict, argv[1]);
		//V
		verification_dict(dict);
		//V
		free(dict);
		return (0);
	}
}	