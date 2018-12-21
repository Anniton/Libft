/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aquan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 10:48:31 by aquan             #+#    #+#             */
/*   Updated: 2018/12/01 14:50:07 by aquan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr_base(int n, int base)
{
	const char	base_str[] = "0123456789abcdef";

	long int a;

	a = n;
	if (base > 16 || base <= 1)
		return ;
	if (a < 0)
	{
		ft_putchar('-');
		a = a * -1;
	}
	if (a >= base)
		ft_putnbr_base(a / base, base);
	ft_putchar((base_str[a % base]));
}

