/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 11:51:15 by mizem             #+#    #+#             */
/*   Updated: 2024/05/30 11:11:08 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	listlen(t_list *list)
{
	int	i;

	i = 0;
	while (list != NULL)
	{
		list = list->next;
		i++;
	}
	return (i);
}

t_list	*lstcpy(t_list *old_list)
{
	t_list	*copy;
	t_list	*new_node;

	copy = NULL;
	while (old_list)
	{
		new_node = ft_lstnew(old_list->content);
		ft_lstadd_back(&copy, new_node);
		old_list = old_list->next;
	}
	return (copy);
}

t_list	*sort(t_list *head)
{
	int		tmp;
	t_list	*list;
	t_list	*tmp_list;
	t_list	*copy;

	copy = lstcpy(head);
	tmp_list = copy;
	while (tmp_list->next != NULL)
	{
		list = tmp_list->next;
		while (list != NULL)
		{
			if (tmp_list->content > list->content)
			{
				tmp = tmp_list->content;
				tmp_list->content = list->content;
				list->content = tmp;
			}
			list = list->next;
		}
		tmp_list = tmp_list->next;
	}
	return (copy);
}
