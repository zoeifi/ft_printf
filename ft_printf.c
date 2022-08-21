/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 17:22:37 by lporras-          #+#    #+#             */
/*   Updated: 2022/08/14 14:11:54 by lporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_chs_type(va_list tp, char j)
{
	int	i;

	i = 0;
	if (j == 'c')
		i = i + ft_putchar(va_arg(tp, int));
	if (j == 's')
		i = i + ft_putstr(va_arg(tp, char *));
	if ((j == 'd') || (j == 'i'))
		i = i + ft_putnbr(va_arg(tp, int));
	if (j == 'u')
		i = i + ft_putnbr_unsig(va_arg(tp, unsigned int));
	if (j == 'x' || j == 'X')
		i = i + ft_printf_hex(va_arg(tp, unsigned int), j);
	if (j == 'p')
		i += ft_putstr("0x") + ft_printf_hex(va_arg(tp, unsigned long int), j);
	if (j == '%')
		i = i + ft_putchar ('%');
	return (i);
}

int	ft_printf(char const *formt, ...)
{
	va_list	list;
	int		i;

	i = 0;
	va_start(list, formt);
	while (*formt)
	{
		if (*formt == '%')
			i = i + ft_chs_type(list, *++formt);
		else
			i = i + ft_putchar(*formt);
		formt++;
	}
	va_end(list);
	return (i);
}
