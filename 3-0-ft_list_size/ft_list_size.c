/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyshin <kirikeria@gmai.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/06 14:54:43 by hyshin            #+#    #+#             */
/*   Updated: 2020/10/06 14:54:43 by hyshin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_list_size(t_list *begin_list)
{
	t_list	*list;
	int		i;

	list = begin_list;
	while (list)
	{
		list = list->next;
		i++;
	}
	return (i);
}
