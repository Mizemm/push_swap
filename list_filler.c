/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_filler.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 12:57:16 by mizem             #+#    #+#             */
/*   Updated: 2024/05/30 11:27:55 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_free(char **var)
{
	int	i;

	i = 0;
	while (var[i])
	{
		free(var[i]);
		i++;
	}
	free(var);
}

int	error(char **var)
{
	int	i;
	int	y;

	i = 0;
	while (var[i])
	{
		y = 0;
		while (var[i][y])
		{
			if (!if_number(&var[i][y]))
				return (0);
			y++;
		}
		i++;
	}
	return (1);
}

int	spaces(char *var)
{
	int	i;

	i = 0;
	while (var[i])
	{
		if (var[i] != ' ')
			return (1);
		i++;
	}
	return (0);
}

void	fill(char **var, t_list **stack_a, t_list *temp_node)
{
	int	i;

	i = 0;
	while (var[i])
	{
		if (!find_dups(*stack_a, ft_atoi(var[i])) || !error(var))
		{
			ft_printf("Error\n");
			ft_lstclear(stack_a);
			ft_free(var);
			exit(1);
		}
		temp_node = ft_lstnew(ft_atoi(var[i]));
		ft_lstadd_back(stack_a, temp_node);
		i++;
	}
}

void	list_filler(char **argv, t_list **stack_a)
{
	t_list	*temp_node;
	char	**var;
	int		i;

	temp_node = NULL;
	i = 1;
	while (argv[i])
	{
		if (!spaces(argv[i]))
		{
			ft_printf("Error\n");
			exit(1); 
		}
		var = ft_split(argv[i], ' ');
		fill(var, stack_a, temp_node);
		ft_free(var);
		i++;
	}
}
