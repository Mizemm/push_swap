/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 15:41:23 by mizem             #+#    #+#             */
/*   Updated: 2024/05/27 12:12:35 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	reverse_rotate(t_list **head)
{
	t_list	*tmp;
	t_list	*current;

	if (!*head || (*head)->next == NULL)
		return (0);
	current = *head;
	tmp = ft_lstlast(*head);
	while (current->next->next != NULL)
		current = current->next;
	current->next = NULL;
	ft_lstadd_front(head, tmp);
	return (1);
}

void	rra(t_list **stack_a)
{
	if (reverse_rotate(stack_a))
		ft_printf("rra\n");
}

void	rrb(t_list **stack_b)
{
	if (reverse_rotate(stack_b))
		ft_printf("rrb\n");
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	int	i;

	i = 0;
	if (reverse_rotate(stack_a))
		i = 1;
	if (reverse_rotate(stack_b))
		i = 1;
	if (i == 1)
		ft_printf("rrr\n");
}
