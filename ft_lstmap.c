/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 21:25:18 by aquan             #+#    #+#             */
/*   Updated: 2018/11/18 18:07:41 by aquan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new_lst;

	new_lst = NULL;
	if (!lst && !f)
		return (NULL);
	if (lst != NULL)
	{
		new_lst = (ft_lstnew((f(lst)->content), (f(lst)->content_size)));
		new_lst->next = ft_lstmap(lst->next, f);
	}
	return (new_lst);
}
