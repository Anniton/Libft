/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 14:46:52 by aquan             #+#    #+#             */
/*   Updated: 2018/11/18 17:59:35 by aquan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void *mem;

	if (size == 0)
		return (NULL);
	if (!(mem = malloc((size))))
		return (NULL);
	ft_bzero(mem, size);
	return (mem);
}
