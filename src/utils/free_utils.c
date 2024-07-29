/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-fe <ddias-fe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 15:56:27 by ddias-fe          #+#    #+#             */
/*   Updated: 2024/07/14 15:34:29 by ddias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_list(t_stack **a)
{
	t_stack	*temp;

	temp = *a;
	while (temp)
	{
		*a = temp->next;
		free(temp);
		temp = *a;
	}
}

void	free_split(char **split)
{
	int	i;

	i = -1;
	while (split[++i])
		free(split[i]);
	free(split);
}

void	free_stacks(t_stack **a, t_stack **b)
{
	free_list(a);
	free_list(b);
}
