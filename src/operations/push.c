/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-fe <ddias-fe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 21:53:57 by ddias-fe          #+#    #+#             */
/*   Updated: 2024/07/16 21:53:57 by ddias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void    push_nodes(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *tmp;

    tmp = NULL;
    while ((*stack_b)->prev)
        *stack_b = (*stack_b)->prev;
    while ((*stack_a)->prev)
        *stack_a = (*stack_a)->prev;
    tmp = create_new_node((*stack_b)->number);
    tmp->prev = NULL;
    if (*stack_a)
        tmp->next = *stack_a;
    else
        tmp->next = NULL;
    (*stack_a)->prev = tmp;
    *stack_a = (*stack_a)->prev;            
}

void    pa(t_stack **a, t_stack **b)
{
    push_nodes(a, b);
}

void    pb(t_stack **a, t_stack **b)
{
    push_nodes(b, a);
}
