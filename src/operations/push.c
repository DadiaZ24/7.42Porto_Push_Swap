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

void    push_nodes(t_stack **stack_src, t_stack **stack_dst)
{
    t_stack *tmp_src;
    t_stack *tmp_dst;

    tmp_src = *stack_src;
    tmp_dst = *stack_dst;
    if (!*stack_dst)
    {
        *stack_dst = tmp_src;
        *stack_src = (*stack_src)->next;
        tmp_src->next = NULL;
    }
    else
    {
        *stack_dst = tmp_src;
        if ((*stack_src)->next)
            (*stack_src) = (*stack_src)->next;
        else
            *stack_src = NULL;
        (*stack_dst)->next = tmp_dst;
    }
}

void    pa(t_stack **a, t_stack **b)
{
    push_nodes(b, a);
    write(1, "pa\n", 3);
}

void    pb(t_stack **a, t_stack **b)
{
    push_nodes(a, b);
    write(1, "pb\n", 3);
}
