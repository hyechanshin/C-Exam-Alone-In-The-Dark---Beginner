/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyshin <kirikeria@gmai.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 14:44:40 by hyshin            #+#    #+#             */
/*   Updated: 2020/10/06 14:44:41 by hyshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{
	char even;
	char odd;

	even = 'B';
	odd = 'a';
	while (even <= 'Z')
	{
		write(1, &odd, 1);
		write(1, &even, 1);
		even += 2;
		odd += 2;
	}
	write(1, "\n", 1);
	return (0);
}
