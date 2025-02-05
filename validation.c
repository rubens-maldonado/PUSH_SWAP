/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaldona <rmaldona@student42.rio>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 13:26:43 by rmaldona          #+#    #+#             */
/*   Updated: 2023/01/14 15:05:38 by rmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	m_error(void)
{
	ft_putstr_fd("Error \n", 2);
	exit(0);
}

int	only_number(char **argv)
{
	int	i;
	int	j;

	j = 1;
	while (argv[j])
	{
		i = 0;
		if ((argv[j][0] == '-' || argv[j][0] == '+') && i == 0)
			i++;
		while (argv[j][i])
		{
			if (!(argv[j][i] >= '0' && argv[j][i] <= '9'))
				m_error();
			i++;
		}
		if ((argv[j][0] == '-' || argv[j][0] == '+') && i == 1)
			m_error();
		j++;
	}
	return (0);
}

int	sorted(t_list **lst)
{
	t_list	*head;

	head = *lst;
	while (head->next != NULL)
	{
		if (head->index > head->next->index)
			return (0);
		head = head->next;
	}
	return (1);
}

int	repeat(char **argv)
{
	int	i;
	int	j;

	j = 1;
	while (argv[j])
	{
		i = j + 1;
		while (argv[i])
		{
			if (ft_atoi(argv[j]) == ft_atoi(argv[i]))
				return (1);
			i++;
		}
		j++;
	}
	return (0);
}

void	limit_int(char **argv)
{
	int		i;
	long	j;

	i = 1;
	while (argv[i])
	{
		if ((argv[i][0] == '-' || argv[i][0] == '+')
				&& ft_strlen(argv[i]) > 11)
			m_error();
		else if (ft_strlen(argv[i]) > 10)
			m_error();
		j = ft_atoi(argv[i]);
		if ((j > INT_MAX) || (j < INT_MIN))
			m_error();
		i++;
	}
}
