/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   give_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:09:00 by mizem             #+#    #+#             */
/*   Updated: 2024/05/29 15:23:56 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_index(t_list *sorted_list)
{
	int		i;
	t_list	*s;

	i = 0;
	s = sorted_list;
	while (sorted_list)
	{
		sorted_list->index = i;
		sorted_list = sorted_list->next;
		i++;
	}
	sorted_list = s;
}

int	return_index(t_list *stack_a, t_list *sorted_list)
{
	while (sorted_list != NULL)
	{
		if (sorted_list->content == stack_a->content)
			return (sorted_list->index);
		sorted_list = sorted_list->next;
	}
	return (0);
}

void	give_node_index(t_list *stack_a, t_list *sorted_list)
{
	while (stack_a != NULL)
	{
		stack_a->index = return_index(stack_a, sorted_list);
		stack_a = stack_a->next;
	}
}
