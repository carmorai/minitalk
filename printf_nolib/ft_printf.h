/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoren <carmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:11:30 by carmoren          #+#    #+#             */
/*   Updated: 2023/09/22 13:49:12 by carmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdio.h>

size_t	check_conversions(va_list args, char const *str);
int		ft_printf(char const *str, ...);
size_t	ft_strlen(const char *s);
size_t	ft_putadd(void *ptr);
size_t	ft_putchar(char c);
size_t	ft_puthex(unsigned int n, char *base);
size_t	ft_putnbr(int n);
size_t	ft_putstr(char *s);
size_t	ft_putunbr(unsigned int n);

#endif