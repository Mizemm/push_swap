/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 12:00:19 by mizem             #+#    #+#             */
/*   Updated: 2024/05/27 12:03:59 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if (!*stack_b)
		return (0);
	tmp = (*stack_b)->next;
	ft_lstadd_front(stack_a, *stack_b);
	ft_printf("pa\n");
	if (tmp == NULL)
	{
		*stack_b = NULL;
		return (0);
	}
	*stack_b = tmp;
	return (1);
}

int	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if (!*stack_a)
		return (0);
	tmp = (*stack_a)->next;
	ft_lstadd_front(stack_b, *stack_a);
	ft_printf("pb\n");
	if (tmp == NULL)
	{
		*stack_a = NULL;
		return (0);
	}
	*stack_a = tmp;
	return (1);
}
