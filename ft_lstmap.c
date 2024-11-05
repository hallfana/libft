/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samberna <samberna@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:32:17 by samberna          #+#    #+#             */
/*   Updated: 2024/11/05 16:43:08 by samberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	size_t	i;

	(void)del;
	new_list = (t_list*)malloc(sizeof(t_list) * ft_lstsize(lst));
	if (!new_list)
		return (NULL);
	i = 0;
	while (lst)
	{
		new_list->content = f(lst->content);
		new_list->next = ft_lstnew("");
		lst = lst->next;
		i++;
	}
	return (new_list);
}