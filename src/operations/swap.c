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

void    swap_nodes(t_stack *(*stack))
{
    if (!(*stack) || get_lst_size(stack) <= 1)
        return ;
    ((*stack)) = ((*stack))->next;
    (*stack)->prev->prev = (*stack);
    (*stack)->prev->next = (*stack)->next;
    if ((*stack)->next)
        (*stack)->next->prev = (*stack)->prev;
    (*stack)->next = (*stack)->prev;
    (*stack)->prev = NULL;
}

void    sa(t_stack **a)
{
    swap_nodes(a);
}

void    sb(t_stack **b)
{
    swap_nodes(b);
}

void    ss(t_stack **b, t_stack **a)
{
    swap_nodes(b);
    swap_nodes(a);
}
