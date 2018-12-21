/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 15:21:50 by aquan             #+#    #+#             */
/*   Updated: 2018/11/18 17:50:15 by aquan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_word(char *s, char c)
{
	int i;
	int nb;

	nb = 0;
	i = 0;
	if (*s != c && *s)
		nb++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			nb++;
		i++;
	}
	return (nb);
}

static char	*ft_len_word(const char *s, char c, int *i)
{
	int		count;
	int		a;
	char	*str;

	count = 0;
	while (s[*i] == c && s[*i])
		(*i)++;
	while (s[*i] != c && s[*i])
	{
		(*i)++;
		count++;
	}
	if (!(str = ((char*)malloc(sizeof(char) * count + 1))))
		return (NULL);
	a = *i - count;
	while (a < *i)
		*str++ = s[a++];
	*str = '\0';
	return (str - count);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**tab;
	int		nb_word;

	i = 0;
	j = 0;
	if (!s || !c)
		return (NULL);
	nb_word = ft_word((char*)s, c);
	if (!(tab = ((char**)malloc(sizeof(char*) * (nb_word + 1)))))
		return (NULL);
	while (j < nb_word)
		tab[j++] = ft_len_word(s, c, &i);
	tab[j] = 0;
	return (tab);
}
