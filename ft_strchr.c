/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:00:35 by aquan             #+#    #+#             */
/*   Updated: 2018/11/14 15:13:19 by aquan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *src, int c)
{
	while (*src)
	{
		if ((char)c == *src)
			return ((char*)src);
		src++;
	}
	if ((char)c == *src)
		return ((char*)src);
	return (NULL);
}
