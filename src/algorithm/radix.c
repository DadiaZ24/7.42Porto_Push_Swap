/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-fe <ddias-fe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 21:00:03 by ddias-fe          #+#    #+#             */
/*   Updated: 2024/07/19 21:26:30 by ddias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	radix(t_stack **a, t_stack **b)
{
	t_stack	*tmp;
	int	maxbits;
	int	i;
	int	j;
	int	stacksize;
	
	set_index_number(a);
	maxbits = get_max_bits(a);
	i = -1;
	stacksize = get_lst_size(a);
	while (++i < maxbits)
	{
		j = 0;
		while (j++ < stacksize)
		{
			tmp = *a;
			if (((tmp->index >> i) & 1) == 1)
				ra(a);
			else
				pb(a, b);
		}
		while (get_lst_size(b))
			pa(a, b);
	}
}

int	get_max_bits(t_stack **a)
{
	int	maxbits;
	int	max;

	maxbits = 0;
	max = get_max(a);
	while ((max >> maxbits) > 0)
		maxbits++;
	return (maxbits);
}
