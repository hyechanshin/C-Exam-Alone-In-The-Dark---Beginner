/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyshin <kirikeria@gmai.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 14:56:32 by hyshin            #+#    #+#             */
/*   Updated: 2020/10/06 14:56:33 by hyshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
# define WD_NUM 1000
# define WD_LEN 1000

char	**ft_split(char *str)
{
	int i;
	int i2;
	int i3;
	char **tab;

	i = 0;
	i2 = 0;
	tab = (char**)malloc(sizeof(**tab) * WD_NUM);
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] > 32)
		{
			i3 = 0;
			tab[i2] = (char*)malloc(sizeof(char) * WD_LEN);
			while (str[i] > 32)
			{
				tab[i2][i3] = str[i];
				i++;
				i3++;
			}
			tab[i2][i3] = '\0';
			i2++;
		}
		else
			i++;
	}
	tab[i2] = 0;
	return (tab);
}
