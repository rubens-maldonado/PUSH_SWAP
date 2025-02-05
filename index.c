/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaldona <rmaldona@student42.rio>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:39:48 by rmaldona          #+#    #+#             */
/*   Updated: 2023/01/14 15:58:46 by rmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	lstindex(char **argv, int i)
{
	int	position;
	int	k;

	k = 1;
	position = -1;
	while (argv[k])
	{
		if (i >= ft_atoi(argv[k]))
			position++;
		k++;
	}
	return (position);
}
