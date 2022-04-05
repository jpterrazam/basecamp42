/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 01:47:15 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/04/01 02:11:48 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	range = NULL;
	if (min < max)
	{
		range = (int *) malloc ((max - min) * sizeof(int));
		i = 0;
		while (min < max)
			range[i++] = min++;
	}
	return (range);
}
