/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 03:23:09 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/04/03 03:56:41 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_array_invert(char *c, int j)
{
	while (j >= 0)
	{
		write(1, &c[j], 1);
		j--;
	}
	write(1, &" ", 1);
}

void	ft_putnbr(int nbr)
{
	char		c_n[50];
	int			i;
	char		*base;
	long int	long_nbr;

	long_nbr = nbr;
	base = "0123456789";
	if (10 >= 2)
	{
		i = 0;
		if (long_nbr < 0)
		{
			write(1, "-", 1);
			long_nbr = long_nbr * -1;
		}	
		while (long_nbr >= 10)
		{
			c_n[i] = base[long_nbr % 10];
			long_nbr = (long_nbr / 10);
			i++;
		}
		c_n[i] = base[long_nbr % 10];
		ft_print_array_invert(c_n, i);
	}
}
