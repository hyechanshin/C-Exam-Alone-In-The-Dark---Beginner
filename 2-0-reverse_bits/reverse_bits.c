/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyshin <kirikeria@gmai.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 14:50:59 by hyshin            #+#    #+#             */
/*   Updated: 2020/10/06 14:51:22 by hyshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	int i;
	unsigned char result;

	i = 8;
	result = 0;
	while (i--)
	{
		result = (result << 1) + (octet & 1);
		octet >>= 1;
	}
	return (result);
}
