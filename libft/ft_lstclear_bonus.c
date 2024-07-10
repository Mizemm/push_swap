/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 16:03:50 by mizem             #+#    #+#             */
/*   Updated: 2024/05/28 12:13:53 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*to_delete;

	if (!lst)
		return ;
	while ((*lst) != NULL)
	{
		to_delete = *lst;
		*lst = (*lst)->next;
		free(to_delete);
	}
}
