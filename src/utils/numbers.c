/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-fe <ddias-fe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:24:15 by ddias-fe          #+#    #+#             */
/*   Updated: 2024/07/22 15:24:15 by ddias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/push_swap.h"

void	numbers_count(t_stack **a, t_stack **b)
{
	int	lstsize;

	lstsize = get_lst_size(a);
	if (lstsize == 2)
		algo_two(a);
	else if (lstsize == 3)
		algo_three(a);
	else if (lstsize == 4)
		algo_four(a, b);
	else if (lstsize == 5)
		algo_five(a, b);
	else if (lstsize > 6)
		radix(a, b);
}
