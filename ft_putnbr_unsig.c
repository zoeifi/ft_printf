/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsig.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 17:15:55 by lporras-          #+#    #+#             */
/*   Updated: 2022/08/09 16:04:45 by lporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsig(unsigned int n)
{
	int	d;

	d = 0;
	if (n >= 10)
		d = ft_putnbr_unsig(n / 10);
	n = n % 10;
	if (n < 10)
		d = d + ft_putchar(n + '0');
	return (d);
}
