/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 14:14:55 by aquan             #+#    #+#             */
/*   Updated: 2018/11/16 15:04:28 by aquan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*dest;
	size_t	i;

	i = 0;
	if (ft_strlen(s1) < n)
		n = ft_strlen(s1);
	if (!(dest = (char*)malloc(sizeof(*dest) * (n + 1))))
		return (NULL);
	while (n--)
	{
		*dest++ = *s1++;
		i++;
	}
	*dest = '\0';
	return (dest - i);
}
