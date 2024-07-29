/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-fe <ddias-fe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 15:07:28 by ddias-fe          #+#    #+#             */
/*   Updated: 2024/07/14 15:35:45 by ddias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ps_parser(int ac, char **av, t_stack **a)
{
	char	**split;

	split = NULL;
	if (ac < 2)
		return (free_list(a), 0);
	if (ac == 2)
	{
		split = ft_split(av[1], ' ');
		if (!check_digits(split))
			return (ft_printf(ERROR_ISDIGIT, RED, ERROR, DEFAULT_COLOR),
				free_split(split), 0);
		string_to_int(ac, av, a);
	}
	else
		if (!check_digits(av + 1))
			return (ft_printf(ERROR_ISDIGIT, RED, ERROR, DEFAULT_COLOR), 0);
	if (!organize_data(av, split, a))
		return (free_list(a), 0);
	if (!check_duplicates(a))
		return (free_list(a), ft_printf(ERROR_DUP, RED, ERROR, DEFAULT_COLOR),
			0);
	if (!check_max_min(a))
		return (free_list(a), ft_printf(ERROR_MAX_MIN, RED, ERROR,
				DEFAULT_COLOR), 0);
	return (1);
}
