/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/13 11:59:28 by mizem             #+#    #+#             */
/*   Updated: 2024/05/27 11:57:12 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	if_number(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (str[i] == '\0')
		return (0);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	find_dups(t_list *stack_a, int nbr)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!stack_a)
		return (1);
	while (stack_a)
	{
		if (stack_a->content == nbr)
			return (0);
		stack_a = stack_a->next;
	}
	return (1);
}

int	if_sorted(t_list *head)
{
	t_list	*current;

	current = head;
	while (current != NULL)
	{
		if (current->next != NULL && current->content > current->next->content)
			return (0);
		current = current->next;
	}
	return (1);
}
