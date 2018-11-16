/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 18:59:30 by aquan             #+#    #+#             */
/*   Updated: 2018/11/14 19:09:10 by aquan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	size_t len;

	len = ft_strlen(to_find);
	str = (const char*)str;
	to_find = (const char*)to_find;
	if (len == '\0')
		return ((char*)str);
	while (*str)
		if (ft_memcmp(str++, to_find, len) == 0)
			return ((char*)str - 1);
	return (0);
}
