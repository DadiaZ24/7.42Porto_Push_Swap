/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-fe <ddias-fe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 16:42:16 by ddias-fe          #+#    #+#             */
/*   Updated: 2024/07/18 17:59:54 by ddias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	algo_two(t_stack **a)
{
	t_stack	*tmp;

	tmp = *a;
	if (tmp->number > tmp->next->number)
		sa(a);
}

void	algo_three(t_stack **a)
{
	t_stack	*tmp;

	tmp = *a;
	if (tmp->number > tmp->next->number)
		sa(a);
	if (tmp->number > tmp->next->next->number)
		rra(a);
}