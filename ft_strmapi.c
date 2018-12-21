/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 18:04:21 by aquan             #+#    #+#             */
/*   Updated: 2018/11/18 18:04:17 by aquan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	size_t			len;
	unsigned int	n;

	n = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	if (!(str = (char*)malloc(sizeof(*str) * (len + 1))))
		return (NULL);
	while (*s)
		*str++ = f(n++, *s++);
	*str = '\0';
	return (str - len);
}
