/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rriyas <rriyas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 16:33:43 by rriyas            #+#    #+#             */
/*   Updated: 2021/10/09 15:58:26 by rriyas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*head;

	head = *lst;
	if (!(*lst))
		return ;
	while (head)
	{
		temp = head;
		head = head->next;
		ft_lstdelone(temp, del);
	}
	*lst = 0;
}
