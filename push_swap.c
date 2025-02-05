/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaldona <rmaldona@student42.rio>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 11:27:48 by rmaldona          #+#    #+#             */
/*   Updated: 2023/01/14 17:01:39 by rmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_lst(t_list	**stack, t_list **stack_b)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = *stack;
	tmp2 = *stack_b;
	while (*stack_b != NULL)
	{
		tmp2 = (*stack_b)->next;
		free(*stack_b);
		*stack_b = tmp2;
	}
	while (*stack != NULL)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
	exit(0);
}

void	sort(int argc, t_list **stack_a, t_list **stack_b)
{
	int	i;

	i = argc;
	if (sorted(stack_a))
		return ;
	if (argc == 3)
		swap_stack(stack_a, "sa");
	if (argc == 4)
		sort_three(stack_a);
	if (argc == 5)
		sort_four(stack_a, stack_b);
	if (argc == 6)
		sort_five(stack_a, stack_b);
	if (argc > 6)
		radix_sort(stack_a, stack_b);
	return ;
}

int	main(int argc, char **argv)
{
	int		i;
	int		position;
	t_list	*stack_a;
	t_list	*stack_b;

	position = 0;
	stack_a = NULL;
	stack_b = NULL;
	i = argc;
	only_number(argv);
	limit_int(argv);
	if (argc <= 2)
		return (0);
	if (repeat(argv))
		m_error();
	while (--i > 0)
	{
		position = lstindex(argv, ft_atoi(argv[i]));
		ft_lstadd_front(&stack_a, (ft_lstnew(ft_atoi(argv[i]), position)));
	}
	sort(argc, &stack_a, &stack_b);
	free_lst(&stack_a, &stack_b);
	return (0);
}
