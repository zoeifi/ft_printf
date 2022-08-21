/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lporras- <lporras-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 19:07:53 by lporras-          #+#    #+#             */
/*   Updated: 2022/08/14 13:57:09 by lporras-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdio.h>
# include<unistd.h>
# include<stdarg.h>

int		ft_printf(char const *formt, ...);
int		ft_putchar(int c);
int		ft_putnbr_unsig(unsigned int n);
int		ft_putnbr(int n);
int		ft_putstr(char *s);
int		ft_printf_hex(unsigned long int n, char c);

#endif