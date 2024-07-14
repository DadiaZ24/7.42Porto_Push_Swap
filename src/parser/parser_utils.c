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

#include "../../include/push_swap.h"

int	check_digits(char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av[++i])
	{
		j = -1;
		while (av[i][++j])
			if (!ft_isdigit(av[i][j]))
				return (0);
	}
	return (1);
}

int	string_to_int(int ac, char **av, t_stack **a)
{
	char	**split;

	if (ac == 2)
	{
		split = ft_split(av[1], ' ');
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
