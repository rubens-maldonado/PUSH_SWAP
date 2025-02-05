/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaldona <rmaldona@student42.rio>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 20:09:22 by rmaldona          #+#    #+#             */
/*   Updated: 2023/01/14 16:06:21 by rmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list **lst)
{
	t_list	*tmp;

	tmp = *lst;
	if (lst)
	{
		while (tmp->next)
				tmp = tmp->next;
	}
	return (tmp);
}
