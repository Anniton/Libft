/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 09:48:29 by aquan             #+#    #+#             */
/*   Updated: 2018/11/14 18:10:43 by aquan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t j;
	size_t i;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (i < n && src[i])
		dest[j++] = src[i++];
	dest[j] = '\0';
	return (dest);
}
