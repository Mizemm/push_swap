/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 13:22:21 by mizem             #+#    #+#             */
/*   Updated: 2024/05/27 12:00:40 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*find_smallest(t_list *list)
{
	t_list	*tmp;

	tmp = list;
	while (list != NULL)
	{
		if (list->content < tmp->content)
			tmp = list;
		list = list->next;
	}
	return (tmp);
}

int	smallest_index(t_list *list, t_list *target)
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

void	medium_sort(t_list **stack_a, t_list **stack_b)
{
	int	i;

	(void)stack_b;
	while (listlen(*stack_a) > 3)
	{
		i = smallest_index(*stack_a, find_smallest(*stack_a));
		if (i == 0)
			pb(stack_a, stack_b);
		else if (i <= listlen(*stack_a) / 2)
			ra(stack_a);
		else if (i > listlen(*stack_a) / 2)
			rra(stack_a);
	}
	tiny_sort(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
}
