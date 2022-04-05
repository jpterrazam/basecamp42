/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 00:12:25 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/04/01 02:11:36 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	*ft_range(int min, int max);

void	print_array(int nbr[], int size)
{
	int	i;

	printf("[");
	i = 0;
	while (i < size)
	{
		printf("%d", nbr[i]);
		if (i != size - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("]\n");
}

int	main(void)
{
	int	min;
	int	max;

	min = 1;
	max = 10;
	printf("min: %d\nmax: %d\n", min, max);
	print_array(ft_range(min, max), max - min);
}
