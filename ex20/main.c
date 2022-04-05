/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaulo-d <jpaulo-d@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 00:12:25 by jpaulo-d          #+#    #+#             */
/*   Updated: 2022/04/01 20:50:54 by jpaulo-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	*str;
	char	*new_str;

	str = "batata";
	new_str = strdup(str);
	printf("strdup:    Foi: %s (%p) ", str, str);
	printf("---> Voltou: %s (%p) \n", new_str, new_str);
	new_str = ft_strdup(str);
	printf("strdup:    Foi: %s (%p) ", str, str);
	printf("---> Voltou: %s (%p) \n", new_str, new_str);
}
