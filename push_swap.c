/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 14:01:16 by mizem             #+#    #+#             */
/*   Updated: 2024/05/30 11:32:13 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	t_list	*sorted_list;

	stack_a = NULL;
	stack_b = NULL;
	sorted_list = NULL;
	if (argc == 1)
		exit (0);
	list_filler(argv, &stack_a);
	if (listlen(stack_a) <= 3 && !if_sorted(stack_a))
		tiny_sort(&stack_a);
	if (listlen(stack_a) <= 5 && !if_sorted(stack_a))
		medium_sort(&stack_a, &stack_b);
	else if (listlen(stack_a) <= 100 && !if_sorted(stack_a))
		ranger(&stack_a, &stack_b, &sorted_list, 15);
	else if (listlen(stack_a) > 100 && !if_sorted(stack_a))
		ranger(&stack_a, &stack_b, &sorted_list, 35);
	ft_lstclear(&stack_a);
	ft_lstclear(&stack_b);
	ft_lstclear(&sorted_list);
	return (0);
}
