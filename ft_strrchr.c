/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 13:51:16 by aquan             #+#    #+#             */
/*   Updated: 2018/11/09 17:38:12 by aquan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *src, int c)
{
	const char *mem;

	mem = src;
	while (*src)
		src++;
	while (src >= mem)
	{
		if (*src == c)
			return ((char*)src);
		src--;
	}
	return (0);
}
