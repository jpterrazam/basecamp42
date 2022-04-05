/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 03:17:07 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/04/04 00:05:25 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putnbr(int nbr);
void	ft_odd_or_even(int n);
void	ft_foreach(int *tab, int length, void (*f)(int));

int	main(void)
{
	int	i;
	int	*tab;
	int	length;

	length = 100;
	tab = malloc(length * sizeof(int));
	i = 0;
	while (i < length)
	{
		tab[i] = i;
		i++;
	}
	ft_foreach(tab, length, &ft_putnbr);
	write(1, &"\n", 1);
	ft_foreach(tab, length, &ft_odd_or_even);
}
