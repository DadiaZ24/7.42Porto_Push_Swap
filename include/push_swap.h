/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddias-fe <ddias-fe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:35:10 by ddias-fe          #+#    #+#             */
/*   Updated: 2024/07/14 15:35:52 by ddias-fe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//________________________________________________________________
//|_____________________________[LIBS]____________________________|
//|_______________________________________________________________|

# include "../libs/libft/libft.h"

//________________________________________________________________
//|____________________________[MACROS]___________________________|
//|_______________________________________________________________|

//----COLORS
# define BLACK "\033[0;30m"
# define RED "\033[0;31m"
# define BLUE "\033[0;36m"
# define DEFAULT_COLOR "\033[0m"

//-----MESSAGES
# define ERROR "ERROR\n"
# define ERROR_AC "%s%s%s Invalid number of arguments (minimum: 2 \
/ actual: %d) \n"
# define ERROR_ISDIGIT "%s%s%s Invalid data -> you can only input digits"
# define ERROR_DUP "%s%s%s Invalid data -> you have duplicate numbers"

//________________________________________________________________
//|__________________________[STRUCTURES]_________________________|
//|_______________________________________________________________|

typedef struct s_stack
{
	int				number;
	struct s_stack	*prev;
	struct s_stack	*next;
}	t_stack;

//________________________________________________________________
//|__________________________[FUNCTIONS]__________________________|
//|_______________________________________________________________|

void	organize_data(char **av, char **split, t_stack **a);
t_stack	*create_new_node(int number);
t_stack	*last_node(t_stack *stack);
void	lst_add_end(t_stack **list, t_stack *node);
int		check_digits(char **av);
int		ps_parser(int ac, char **av, t_stack **a);
void	free_list(t_stack **a);
void	free_split(char **split);
void	init_data(t_stack **a, t_stack **b);
int		string_to_int(int ac, char **av, t_stack **a);
int		check_duplicates(t_stack **a);

#endif