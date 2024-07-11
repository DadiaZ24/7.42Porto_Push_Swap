/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-fe <ddias-fe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:34:55 by ddias-fe          #+#    #+#             */
/*   Updated: 2024/07/11 18:25:47 by ddias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	main(int ac, char **av)
{
	t_stack 	*a;
	t_stack		*b;
	a = NULL;
	b = NULL;
	if (!ps_parser(ac, av, &a))
		return (0);
	(void)av;
	return (0);
}