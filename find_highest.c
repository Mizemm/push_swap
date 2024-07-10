/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_highest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 16:38:02 by mizem             #+#    #+#             */
/*   Updated: 2024/05/27 11:57:33 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*find_highest(t_list *list)
{
	t_list	*tmp;

	tmp = list;
	while (list != NULL)
	{
		if (list->content > tmp->content)
			tmp = list;
		list = list->next;
	}
	return (tmp);
}

int	highest_index(t_list *list, t_list *target)
{
	int	i;

	i = 0;
	while (list != NULL)
	{
		if (list->content == target->content)
			return (i);
		list = list->next;
		i++;
	}
	return (i);
}
