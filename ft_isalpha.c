/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 10:42:34 by aquan             #+#    #+#             */
/*   Updated: 2018/11/18 13:52:37 by aquan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalpha(int c)
{
	if (((c >= 'a' && c <= 'z')) || ((c >= 'A' && c <= 'Z')))
		return (1);
	else
		return (0);
}
