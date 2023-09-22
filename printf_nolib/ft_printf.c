/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoren <carmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:11:19 by carmoren          #+#    #+#             */
/*   Updated: 2023/09/22 13:48:58 by carmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdarg.h>

size_t	check_conversions(va_list args, char const *str)
{
	++str;
	while (*str)
	{
		if (*str == 'c')
			return (ft_putchar(va_arg(args, int)));
		else if (*str == 's')
			return (ft_putstr(va_arg(args, char *)));
		else if (*str == 'p')
			return (ft_putadd(va_arg(args, void *)));
		else if (*str == 'd')
			return (ft_putnbr(va_arg(args, int)));
		else if (*str == 'i')
			return (ft_putnbr(va_arg(args, int)));
		else if (*str == 'u')
			return (ft_putunbr(va_arg(args, unsigned int)));
		else if (*str == 'x')
			return (ft_puthex(va_arg(args, unsigned int), "0123456789abcdef"));
		else if (*str == 'X')
			return (ft_puthex(va_arg(args, unsigned int), "0123456789ABCDEF"));
		else if (*str == '%')
			return (ft_putchar('%'));
		else
			return (-1);
	}
	return (0);
}

int	ft_printf(char const *str, ...)
{
	size_t	n;
	va_list	args;

	n = 0;
	if (!str)
		return (0);
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			n += check_conversions(args, str);
			str++;
		}
		else
		{
			ft_putchar(*str);
			n++;
		}
		str++;
	}
	va_end(args);
	return (n);
}
