/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-fe <ddias-fe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 17:06:39 by ddias-fe          #+#    #+#             */
/*   Updated: 2024/07/14 15:35:15 by ddias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

t_stack	*create_new_node(long number)
{
	t_stack	*node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->number = number;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}

t_stack	*last_node(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack)
	{
		if (!stack->next)
			return (stack);
		stack = stack->next;
	}
	return (stack);
}

void	lst_add_end(t_stack **list, t_stack *node)
{
	t_stack	*tmp;

	if (!node)
		return ;
	if (!*list)
	{
		*list = node;
		return ;
	}
	tmp = last_node(*list);
	node->prev = tmp;
	tmp->next = node;
}

long	get_lst_size(t_stack **lst)
{
	long	size;

	size = 0;
	while (*lst)
	{
		*lst = (*lst)->next;
		size++;
	}
	return (size);
}
