/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyshin <kirikeria@gmai.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 14:44:16 by hyshin            #+#    #+#             */
/*   Updated: 2020/10/06 14:44:18 by hyshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	fprime(int nb)
{
	int i;

	i = 2;
	if (nb == 1)
	{
		printf("1");
		return ;
	}
	while (nb >= i)
	{
		if (nb % i == 0)
		{
			printf("%d", i);
			if (nb != i)
				printf("*");
			nb /= i;
			i--;
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		fprime(atoi(av[1]));
	printf("\n");
	return (0);
}
