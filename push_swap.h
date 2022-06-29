/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bgales <bgales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by                   #+#    #+#             */
/*   Updated: 2022/06/29 13:28:16 by bgales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include "./ft_printf/ft_printf.h"
# include "./libft/libft.h"

typedef struct s_lst
{
	int		content;
	struct s_lst	*next;
} t_lst;

int		ft_listsize(t_lst *lst);
void	sort(t_lst **sa, t_lst **sb);
void	ft_lstdelone(t_lst *lst);
void	ft_lstclear(t_lst **lst);
void	print_list(t_lst **lst);
void	print_and_exit(char *str);
void	push_out(t_lst **in, t_lst **out, int mode);
void	swap(t_lst **in, int mode);
char	**get_quote(char *argv);
void	free_lst(t_lst **stack);
t_lst	**rev_rotate(t_lst **in, int mode);
void	sorting(t_lst **sa, t_lst **sb);
void	rev_rot(t_lst **ret, t_lst **in, int first, int last);
void	rotate(t_lst **in, int mode);
void	swap_both(t_lst **sa, t_lst **out);
void	rev_rotate_both(t_lst **sa, t_lst **sb);
void	parsing(int argc, char **argv);
void	num_parse(t_lst **sa);
void	stack_init(t_lst **sa, t_lst **sb, t_lst **first_a, t_lst ** first_b, char **argv);

#endif