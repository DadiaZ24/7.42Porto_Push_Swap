/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-fe <ddias-fe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:34:55 by ddias-fe          #+#    #+#             */
/*   Updated: 2024/07/14 15:36:14 by ddias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "include/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	//(void)b;
	if (!ps_parser(ac, av, &a))
		return (0);

	//Testing environment
	radix(&a, &b);
	/* while (a)
	{
		printf("Number: %zu ----> %d\n", a->number, a->index);
		a = a->next;
	} */
	return (0);
}
