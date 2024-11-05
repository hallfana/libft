/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samberna <samberna@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:32:17 by samberna          #+#    #+#             */
/*   Updated: 2024/11/05 16:57:56 by samberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*head;

	if (!lst || !f || !del)
		return (NULL);
	new_list = ft_lstnew(f(lst->content));
	head = new_list;
	while (lst && lst->next)
	{
		new_list->next = ft_lstnew(f(lst->next->content));
		lst = lst->next;
	}
	return (head);
}