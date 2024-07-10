/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 11:42:30 by mizem             #+#    #+#             */
/*   Updated: 2024/05/27 12:06:19 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	rotate(t_list **head)
{
	t_list	*tmp;

	if (!*head || (*head)->next == NULL)
		return (0);
	tmp = *head;
	*head = (*head)->next;
	tmp->next = NULL;
	ft_lstadd_back(head, tmp);
	return (1);
}

void	ra(t_list **stack_a)
{
	if (rotate(stack_a))
		ft_printf("ra\n");
}

void	rb(t_list **stack_b)
{
	if (rotate(stack_b))
		ft_printf("rb\n");
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	int	i;

	i = 0;
	if (rotate(stack_a))
		i = 1;
	if (rotate(stack_b))
		i = 1;
	if (i == 1)
		ft_printf("rr\n");
}
