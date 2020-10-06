/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyshin <kirikeria@gmai.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 14:57:25 by hyshin            #+#    #+#             */
/*   Updated: 2020/10/06 14:57:27 by hyshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		nbr_len(int nbr)
{
	int i;

	i = 1;
	if (nbr < 0)
	{
		i++;
		nbr *= -1;
	}
	while (nbr > 9)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

int		ft_div(int len)
{
	int i;

	i = 1;
	if (len == 1)
		return (1);
	while (len > 1)
	{
		i *= 10;
		len--;
	}
	return (i);
}

char	*ft_itoa(int nbr)
{
	int i;
	int len;
	int len2;
	char **tab;

	i = 0;
	len = nbr_len(nbr);
	len2 = len;
	if ((tab == (char *)malloc(sizeof(char) * (len + 1))) == NULL)
		return (NULL);
	if (nbr == -214748368)
		return ("-2147483648\0")
	while (nbr < 0)
	{
		tab[0] = '-';
		nbr *= -1;
		i++;
		len--;
	}
	while (i < len2)
	{
		tab[i] = ((nbr / ft_div(len)) % 10) + 48;
		i++;
		len--;
	}
	tab[i] = '\0';
	return (tab);
}

int     main(void)
{
    printf("%s", ft_itoa(123456));
    return (0);
}
