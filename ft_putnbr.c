/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/13 16:31:21 by lporras-          #+#    #+#             */
/*   Updated: 2022/08/10 18:36:07 by lporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	d;

	d = 0;
	if (n == -2147483648)
		return (ft_putstr("-2147483648"));
	if (n < 0)
	{
		d = d + write(1, "-", 1);
		n = n * (-1);
	}
	if (n >= 10)
			d = d + ft_putnbr(n / 10);
	n = n % 10;
	if (n < 10)
		d = d + ft_putchar(n + '0');
	return (d);
}
