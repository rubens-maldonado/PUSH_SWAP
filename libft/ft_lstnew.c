/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmaldona <rmaldona@student42.rio>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 18:48:50 by rmaldona          #+#    #+#             */
/*   Updated: 2023/01/14 16:06:43 by rmaldona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(int content, int index)
{
	t_list	*lst;

	lst = malloc(sizeof(t_list));
	lst->val = content;
	lst->index = index;
	lst->next = NULL;
	return (lst);
}
