/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:30:35 by mizem             #+#    #+#             */
/*   Updated: 2024/05/27 12:09:36 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap(t_list **head)
{
	t_list	*tmp;

	if (*head == NULL || (*head)->next == NULL)
		return (0);
	tmp = (*head)->next;
	(*head)->next = (*head)->next->next;
	tmp->next = *head;
	*head = tmp;
	return (1);
}

void	sa(t_list **stack_a)
{
	if (swap(stack_a))
		ft_printf("sa\n");
}

void	sb(t_list **stack_b)
{
	if (swap(stack_b))
		ft_printf("sb\n");
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	int	i;

	i = 0;
	if (swap(stack_a))
		i = 1;
	if (swap(stack_b))
		i = 1;
	if (i == 1)
		ft_printf("ss\n");
}
