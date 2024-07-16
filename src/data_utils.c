/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-fe <ddias-fe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:51:38 by ddias-fe          #+#    #+#             */
/*   Updated: 2024/07/14 15:34:21 by ddias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	organize_data(char **av, char **split, t_stack **a)
{
	int		i;
	t_stack	*tmp;

	if (split)
	{
		*a = create_new_node(ft_atol(split[0]));
		tmp = *a;
		i = 0;
		while (split[++i])
			lst_add_end(&tmp, create_new_node(ft_atol(split[i])));
	}
	else
	{
		*a = create_new_node(ft_atol(av[1]));
		tmp = *a;
		i = 1;
		while (av[++i])
			lst_add_end(&tmp, create_new_node(ft_atol(av[i])));
	}
	*a = tmp;
}
