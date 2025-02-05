/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaldona <rmaldona@student42.rio>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/13 19:45:37 by rmaldona          #+#    #+#             */
/*   Updated: 2023/01/14 16:00:51 by rmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_list **stack_a)
{
	t_list	*tmp;

	tmp = *stack_a;
	if (tmp->index > tmp->next->index)
		swap_stack(&tmp, "sa");
	if (tmp->next->next->index < tmp->index)
		reverse_rotate_stack(&tmp, "rra");
	else if (tmp->next->next->index < tmp->next->index)
	{
		reverse_rotate_stack(&tmp, "rra");
		swap_stack(&tmp, "sa");
	}
	*stack_a = tmp;
}

void	sort_four(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	tmp = *stack_a;
	while (tmp->index != 0)
		rotate_stack(&tmp, "sa");
	push_stack(&tmp, stack_b, "pb");
	sort_three(&tmp);
	push_stack(stack_b, &tmp, "pa");
	*stack_a = tmp;
}

void	sort_five(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	int		i;

	i = 6;
	tmp = *stack_a;
	while (i-- && ft_lstsize(tmp) > 3)
	{
		if (tmp->index == 0 || tmp->index == 1)
			push_stack(&tmp, stack_b, "pb");
		else
			rotate_stack(&tmp, "ra");
	}
	sort_three(&tmp);
	if ((*stack_b)->index < (*stack_b)->next->index)
		swap_stack(stack_b, "sb");
	push_stack(stack_b, &tmp, "pa");
	push_stack(stack_b, &tmp, "pa");
	*stack_a = tmp;
}

int	radix_bits(t_list **stack_a)
{
	int	big_index;
	int	i;

	i = 1;
	big_index = ft_lstsize(*stack_a);
	big_index--;
	while (big_index > 1)
	{
		big_index = big_index / 2;
		i++;
	}
	return (i);
}

void	radix_sort(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	int		bit;
	int		bit_max;
	int		size_a;

	bit = 0;
	bit_max = radix_bits(stack_a);
	tmp = *stack_a;
	while (bit < bit_max)
	{
		size_a = ft_lstsize(tmp);
		while (size_a > 0)
		{
			if ((tmp->index & (1 << bit)) != 0)
				rotate_stack(&tmp, "ra");
			else
				push_stack(&tmp, stack_b, "pb");
			size_a--;
		}
		while (*stack_b)
			push_stack(stack_b, &tmp, "pa");
		bit++;
	}
	*stack_a = tmp;
}
