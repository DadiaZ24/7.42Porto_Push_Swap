/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-fe <ddias-fe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 21:28:19 by ddias-fe          #+#    #+#             */
/*   Updated: 2024/07/16 21:28:19 by ddias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void    swap_nodes(t_stack **stack)
{
    t_stack *tmp;
    int     n;

    n = (*stack)->next->number;
    tmp = *stack;
    tmp = tmp->next;
    tmp->number = (*stack)->number;
    (*stack)->number = n;
}

void    sa(t_stack **a)
{
    swap_nodes(a);
    write(1, "sa\n", 3);
}

void    sb(t_stack **b)
{
    swap_nodes(b);
    write(1, "sb\n", 3);
}

void    ss(t_stack **b, t_stack **a)
{
    swap_nodes(b);
    swap_nodes(a);
    write(1, "ss\n", 3);
}
