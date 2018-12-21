/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:00:51 by aquan             #+#    #+#             */
/*   Updated: 2018/11/18 17:57:34 by aquan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	if (ft_strlen(to_find) == '\0')
		return ((char*)str);
	n = n - ft_strlen(to_find);
	while (*str && (int)n >= 0)
	{
		if ((ft_strncmp(str, to_find, ft_strlen(to_find)) == 0))
			return ((char*)str);
		n--;
		str++;
	}
	return (0);
}
