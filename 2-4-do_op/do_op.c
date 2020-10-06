/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyshin <kirikeria@gmai.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 14:53:01 by hyshin            #+#    #+#             */
/*   Updated: 2020/10/06 14:53:04 by hyshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		main(int ac, char **av)
{
	int a;
	int b;
	int result;
	char op;

	result = 0;
	if (ac == 4)
	{
		a = atoi(av[1]);
		op = av[2][0];
		b = atoi(av[3]);
		if (op == '+')
			result = a + b;
		else if (op == '-')
			result = a - b;
		else if (op == '*')
			result = a * b;
		else if (op == '/')
			result = a / b;
		else if (op == '%')
			result = a % b;
		printf("%d\n", result);
	}
	else
		write(1, "\n", 1);
	return (0);
}
