/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaldona <rmaldona@student42.rio>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 13:54:07 by rmaldona          #+#    #+#             */
/*   Updated: 2023/01/14 17:10:49 by rmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define INT_MAX 2147483647
# define INT_MIN -2147483648

# include "./libft/libft.h"
# include "./printf/ft_printf.h"

void	ft_lstprint(t_list *lst);
void	m_error(void);
int		only_number(char **argv);
int		repeat(char **argv);
int		sorted(t_list **lst);
void	swap_stack(t_list **stack, char *msg);
void	rotate_stack(t_list **stack, char *msg);
void	reverse_rotate_stack(t_list **stack, char *msg);
void	push_stack(t_list **stack_a, t_list **stack_b, char *msg);
int		lstindex(char **argv, int i);
void	limit_int(char **argv);
void	sort_three(t_list **stack_a);
void	sort_four(t_list **stack_a, t_list **stack_b);
void	sort_five(t_list **stack_a, t_list **stack_b);
int		radix_bits(t_list **stack_a);
void	radix_sort(t_list **stack_a, t_list **stack_b);

#endif
