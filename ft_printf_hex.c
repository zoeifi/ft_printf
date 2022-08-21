/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 19:27:09 by lporras-          #+#    #+#             */
/*   Updated: 2022/08/14 13:56:47 by lporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_hex(unsigned long int n, char c)
{
	int	r;

	r = 0;
	if (c == 'x' || c == 'p')
	{
		if (n >= 16)
			r = ft_printf_hex (n / 16, c);
		r = r + ft_putchar("0123456789abcdef"[n % 16]);
	}
	if (c == 'X')
	{
		if (n >= 16)
			r = r + ft_printf_hex(n / 16, c);
		r = r + ft_putchar("0123456789ABCDEF"[n % 16]);
	}
	return (r);
}
