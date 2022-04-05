/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:17:37 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/03/31 23:14:30 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_sort_str(char **str, int size)
{
	int		i;
	int		swapped;
	char	*aux;

	while (1)
	{
		i = 1;
		swapped = 0;
		while (i < size)
		{
			if (ft_strcmp(str[i], str[i + 1]) > 0)
			{
				aux = str[i + 1];
				str[i + 1] = str[i];
				str[i] = aux;
				swapped = 1;
			}
			i++;
		}
		if (!swapped)
			break ;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc > 1)
	{
		ft_sort_str(argv, (argc - 1));
		i = 0;
		while (i++ < argc - 1)
		{
			while (*argv[i])
			{
				ft_putchar(*argv[i]);
				argv[i]++;
			}
			ft_putchar('\n');
		}
	}
}
