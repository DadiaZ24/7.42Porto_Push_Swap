/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-fe <ddias-fe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 16:42:16 by ddias-fe          #+#    #+#             */
/*   Updated: 2024/07/29 16:42:04 by ddias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algo_two(t_stack **a)
{
	if ((*a)->number > (*a)->next->number)
		sa(a);
}

void	algo_three(t_stack **a)
{
	int		max;

	(*a)->index = 0;
	max = get_max(a);
	if (max == (*a)->number)
		ra(a);
	if (max == (*a)->next->number)
		rra(a);
	if ((*a)->number > (*a)->next->number)
		sa(a);
}

void	algo_four(t_stack **a, t_stack **b)
{
	int		min;
	int		i;
	int		stacksize;
	t_stack	*l_node;

	l_node = last_node(a);
	min = get_min(a);
	stacksize = get_lst_size(a);
	i = -1;
	while (++i < stacksize)
	{
		if (l_node->number == min)
			rra(a);
		if ((*a)->number != min)
			ra(a);
		else
		{
			pb(a, b);
			break ;
		}
	}
	algo_three(a);
	pa(a, b);
}

void	algo_five(t_stack **a, t_stack **b)
{
	int		min;
	int		i;
	int		stacksize;
	t_stack	*l_node;

	min = get_min(a);
	stacksize = get_lst_size(a);
	i = -1;
	l_node = last_node(a);
	while (++i < stacksize)
	{
		if (l_node->number == min)
			rra(a);
		if ((*a)->number != min)
			ra(a);
		else
		{
			pb(a, b);
			break ;
		}
	}
	algo_four(a, b);
	pa(a, b);
}
