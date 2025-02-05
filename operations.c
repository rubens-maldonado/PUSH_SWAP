/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaldona <rmaldona@student42.rio>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 21:30:08 by rmaldona          #+#    #+#             */
/*   Updated: 2023/01/14 17:01:15 by rmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_stack(t_list **stack, char *msg)
{
	t_list	*new;
	t_list	*tmp;

	new = *stack;
	tmp = (*stack)->next;
	*stack = tmp;
	new->next = tmp->next;
	tmp->next = new;
	ft_printf("%s\n", msg);
}

void	rotate_stack(t_list **stack, char *msg)
{
	t_list	*tail;
	t_list	*temp;
	t_list	*head;

	head = (*stack)->next;
	temp = *stack;
	tail = *stack;
	while (tail->next != NULL)
		tail = tail->next;
	tail->next = temp;
	*stack = head;
	temp->next = NULL;
	ft_printf("%s\n", msg);
}

void	reverse_rotate_stack(t_list **stack, char *msg)
{
	t_list	*tail;
	t_list	*temp;
	t_list	*head;

	temp = *stack;
	tail = *stack;
	while (tail->next->next != NULL)
		tail = tail->next;
	head = tail->next;
	tail->next = NULL;
	head->next = temp;
	*stack = head;
	ft_printf("%s\n", msg);
}

void	push_stack(t_list **stack_a, t_list **stack_b, char *msg)
{
	t_list	*head_sa;
	t_list	*head_sb;
	t_list	*temp;

	temp = NULL;
	head_sb = *stack_a;
	head_sa = (*stack_a)->next;
	temp = *stack_b;
	head_sb->next = temp;
	*stack_a = head_sa;
	*stack_b = head_sb;
	ft_printf("%s\n", msg);
}
