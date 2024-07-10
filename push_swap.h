/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 12:02:14 by mizem             #+#    #+#             */
/*   Updated: 2024/05/30 11:15:24 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include "ft_printf/ft_printf.h"
# include <unistd.h>
# include <stdlib.h>

void	sa(t_list **stack_a);
void	sb(t_list **stack_b);
void	ss(t_list **stack_a, t_list **stack_b);
void	rra(t_list **stack_a);
void	rrb(t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);
void	ra(t_list **stack_a);
void	rb(t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);
int		pa(t_list **stack_a, t_list **stack_b);
int		pb(t_list **stack_a, t_list **stack_b);
void	list_filler(char **argv, t_list **stack_a);
int		if_number(char *str);
int		find_dups(t_list *stack_a, int nbr);
int		if_sorted(t_list *head);
int		listlen(t_list *list);
void	tiny_sort(t_list **head);
void	medium_sort(t_list **stack_a, t_list **stack_b);
void	give_node_index(t_list *stack_a, t_list *sorted_list);
void	sort_index(t_list *sorted_list);
t_list	*sort(t_list *head);
t_list	*find_highest(t_list *list);
int		highest_index(t_list *list, t_list *target);
void	ranger(t_list **stack_a, t_list **stack_b, 
			t_list **sorted_list, int end);

#endif