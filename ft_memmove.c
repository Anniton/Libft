/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 17:15:41 by aquan             #+#    #+#             */
/*   Updated: 2018/11/14 15:15:49 by aquan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	s = (unsigned char*)src;
	d = (unsigned char*)dest;
	i = 0;
	if (d < s)
		ft_strncpy((char*)d, (const char*)s, n);
	else
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	return (d);
}
