/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/18 16:24:52 by aquan             #+#    #+#             */
/*   Updated: 2018/11/18 16:48:40 by aquan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstlen(t_list **alst)
{
	int		i;
	t_list	*ptr;

	ptr = *alst;
	i = 0;
	if (!*alst || !alst)
		return (0);
	while (ptr)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}
