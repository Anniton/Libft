/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 13:46:06 by aquan             #+#    #+#             */
/*   Updated: 2018/11/18 18:10:10 by aquan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		size;
	int		i;
	int		tmp;

	size = 0;
	while (*str)
		size++;
	size = size - 1;
	i = 0;
	while (i <= size)
	{
		tmp = str[size];
		str[size] = str[i];
		str[i] = tmp;
		size--;
		i++;
	}
	return (str);
}
