/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 03:17:07 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/04/05 21:40:38 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char*));

int	ft_is_x(char *str)
{
	if (*str == 'X')
		return (1);
	return (0);
}

int	main(void)
{
	int		length;
	char	**array;

	length = 10;
	array = malloc(length * sizeof(char *));
	array[0] = "sssssssX";
	array[1] = "X";
	array[2] = "j";
	array[3] = "X";
	array[4] = "X";
	array[5] = "x";
	array[6] = "X";
	array[7] = "o";
	array[8] = "X";
	array[9] = "0";
	printf("Há %d 'X' no array\n", ft_count_if(array, &ft_is_x));
}
