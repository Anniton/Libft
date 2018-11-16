/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 21:25:18 by aquan             #+#    #+#             */
/*   Updated: 2018/11/16 13:34:39 by aquan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *first;
	t_list *new_lst;

	first = f(lst);
	new_lst = first;
	if (first == NULL)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
		new_lst->next = f(lst);
		if (new_lst->next == NULL)
			return (NULL);
		new_lst = new_lst->next;
	}
	return (first);
}
