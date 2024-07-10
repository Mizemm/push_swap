/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   range.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 16:33:45 by mizem             #+#    #+#             */
/*   Updated: 2024/05/29 16:32:40 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_a(t_list **stack_a, t_list **stack_b)
{
	int	i;
	int	len;

	while (listlen(*stack_b))
	{
		len = listlen(*stack_b);
		i = highest_index(*stack_b, find_highest(*stack_b));
		if (i == 0)
			pa(stack_a, stack_b);
		else if (i <= len / 2)
			rb(stack_b);
		else if (i > len / 2)
			rrb(stack_b);
		len--;
	}
}

void	push_to_b(t_list **stack_a, t_list **stack_b, int end)
{
	int	start;

	start = 0;
	while ((*stack_a) != NULL)
	{
		if ((*stack_a)->index >= start && (*stack_a)->index <= end)
		{
			pb(stack_a, stack_b);
			start++;
			end++;
		}
		else if ((*stack_a)->index < start)
		{
			pb(stack_a, stack_b);
			rb(stack_b);
			start++;
			end++;
		}
		else if ((*stack_a)->index > end)
			rra(stack_a);
	}
}

void	ranger(t_list **stack_a, t_list **stack_b, 
			t_list **sorted_list, int end)
{
	int	start;

	start = 0;
	*sorted_list = sort(*stack_a);
	sort_index(*sorted_list);
	give_node_index(*stack_a, *sorted_list);
	push_to_b(stack_a, stack_b, end);
	push_to_a(stack_a, stack_b);
}
