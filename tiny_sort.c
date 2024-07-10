/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tiny_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 15:05:41 by mizem             #+#    #+#             */
/*   Updated: 2024/05/27 12:10:52 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	cases(t_list **head, t_list *node1, t_list *node2, t_list *node3)
{
	if (node1->content > node2->content && node1->content < node3->content)
		sa(head);
	else if (node1->content > node2->content && node2->content > node3->content)
	{
		sa(head);
		rra(head);
	}
	else if (node1->content > node2->content && node1->content > node3->content)
		ra(head);
	else if (node1->content < node2->content && node1->content > node3->content)
		rra(head);
	else if (node1->content < node2->content && node1->content < 
		node3->content && node2->content > node3->content)
	{
		sa(head);
		ra(head);
	}
}

void	tiny_sort(t_list **head)
{
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;

	if (listlen(*head) == 2 && !if_sorted(*head))
	{
		sa(head);
		return ;
	}
	node1 = *head;
	node2 = (*head)->next;
	node3 = (*head)->next->next;
	cases(head, node1, node2, node3);
}
