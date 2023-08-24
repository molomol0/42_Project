/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdenis <jdenis@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:31:36 by jdenis            #+#    #+#             */
/*   Updated: 2023/06/20 17:35:43 by jdenis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <limits.h>

long	ft_atoi(const char *nptr)
{
	long	res;
	int		signe;
	int		i;

	i = 0;
	res = 0;
	signe = 0;
	while (nptr[i] == 32 || (nptr[i] <= 13 && nptr[i] >= 9))
		i++;
	if (nptr[i] == 43 || nptr[i] == 45)
	{
		if (nptr[i] == 45)
			signe = 1 - signe;
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		res = res * 10 + nptr[i] - 48;
		i++;
	}
	if (signe > 0)
		res = res * -1;
	return (res);
}

// #include <stdio.h>
// int main(void)
// {
// 	char a[] = "0";
// 	char b[] = "-0";
// 	printf("val de a : %ld\n", ft_atoi(a));
// 	printf("val de b : %ld\n", ft_atoi(b));
// 	if (ft_atoi(a) == ft_atoi(b))
// 		printf("egal\n");
// 	else
// 		printf("pas egal\n");
// }