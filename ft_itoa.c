/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 17:33:57 by aquan             #+#    #+#             */
/*   Updated: 2018/11/16 13:44:16 by aquan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_minitoa(int b, long int n, int neg)
{
	char	*str;

	if (!(str = (char*)malloc(sizeof(*str) * b + 1)))
		return (NULL);
	str[b] = '\0';
	while (b > 0)
	{
		str[--b] = (n % 10 + 48);
		n = n / 10;
	}
	if (neg)
		str[0] = '-';
	return (str);
}

char		*ft_itoa(int n)
{
	int			b;
	long int	a;
	int			neg;
	long int	nb;

	nb = (long int)n;
	neg = (nb < 0 ? 1 : 0);
	b = (nb <= 0 ? 1 : 0);
	a = nb;
	if (nb < 0)
		nb = nb * -1;
	while (a)
	{
		a = a / 10;
		b++;
	}
	return (ft_minitoa(b, nb, neg));
}
