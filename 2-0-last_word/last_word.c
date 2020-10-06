/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyshin <kirikeria@gmai.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 14:50:47 by hyshin            #+#    #+#             */
/*   Updated: 2020/10/06 14:50:50 by hyshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     main(int argc, char **argv)
{
    int i;
    int start;

    if(argc == 2)
    {
		while(argv[1][i])
		{
			if(argv[1][i] == ' ' && argv[1][i + 1] != ' ' && argv[1][i + 1] != '\0')
				start = i + 1;
			i++;
		}
		while (argv[1][start] != ' ' && argv[1][start] != '\0')
		{
			write(1, &argv[1][start], 1);
			start++;
		}
	}
    write(1, "\n", 1);
    return 0;
}
