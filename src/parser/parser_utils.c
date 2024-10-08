/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-fe <ddias-fe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 15:07:19 by ddias-fe          #+#    #+#             */
/*   Updated: 2024/07/14 15:35:06 by ddias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_digits(char **av)
{
	int	i;
	int	j;

	i = -1;
	while (av[++i])
	{
		j = -1;
		if (av[i][0] == '-' || av[i][0] == '+')
			j++;
		while (av[i][++j])
			if (!ft_isdigit(av[i][j]))
				return (0);
		if (j > 11)
			return (ft_printf(ERROR_MAX_MIN, RED, ERROR, DEFAULT_COLOR), 0);
	}
	return (1);
}

int	string_to_int(int ac, char **av, char **split, t_stack **a)
{
	if (ac == 2)
	{
		if (!check_digits(split))
			return (free_split(split), 0);
		organize_data(av, split, a);
	}
	return (1);
}

int	check_duplicates(t_stack **a)
{
	t_stack	*head;
	t_stack	*next_node;

	head = *a;
	next_node = head;
	while (head)
	{
		next_node = head->next;
		while (next_node)
		{
			if (next_node->number == head->number)
				return (0);
			next_node = next_node->next;
		}
		head = head->next;
	}
	return (1);
}

int	check_max_min(t_stack **a)
{
	t_stack	*tmp;

	tmp = *a;
	while (tmp)
	{
		if (tmp->number > INT_MAX || tmp->number < INT_MIN)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
