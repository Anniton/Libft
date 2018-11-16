/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 14:59:31 by aquan             #+#    #+#             */
/*   Updated: 2018/11/16 15:28:53 by aquan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isspace_mod(char const *s)
{
	if (*s == ' ' || *s == '\t' || *s == '\n')
		return (1);
	return (0);
}

char			*ft_strtrim(char const *s)
{
	char	*str;
	size_t	i;
	size_t	b;

	i = 0;
	b = 0;
	if (!s)
		return (NULL);
	while (ft_isspace_mod(s) && *s)
		s++;
	while (s[i + 1])
		i++;
	while (ft_isspace_mod(&s[i]))
		i--;
	i++;
	if (!(str = (char*)malloc(sizeof(*str) * (i + 1))))
		return (NULL);
	while (b++ < i)
		*str++ = *s++;
	*str = '\0';
	return (str - i);
}
