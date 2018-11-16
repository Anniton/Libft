/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 17:24:32 by aquan             #+#    #+#             */
/*   Updated: 2018/11/15 17:05:59 by aquan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t					i;
	unsigned char			*dest1;
	const unsigned char		*src1;

	dest1 = (unsigned char*)dest;
	src1 = (const unsigned char*)src;
	i = 0;
	while (i < n)
	{
		dest1[i] = src1[i];
		if (dest1[i] == (unsigned char)c)
			return (dest1 + i + 1);
		i++;
	}
	return (NULL);
}
