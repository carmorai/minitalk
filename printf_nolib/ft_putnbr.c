/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoren <carmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:11:53 by carmoren          #+#    #+#             */
/*   Updated: 2023/09/22 13:43:29 by carmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

static size_t	ft_num_len(long number)
{
	size_t	len;

	len = 1;
	if (number < 0)
	{
		len++;
		number *= -1;
	}
	while (number / 10)
	{
		number /= 10;
		len++;
	}
	return (len);
}

size_t	ft_putnbr(int n)
{
	char	*str;
	long	num;
	size_t	len;

	num = (long)n;
	len = ft_num_len(num);
	str = (char *)malloc(len + 1);
	if (!str)
		return (0);
	str[len--] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num *= -1;
	}
	if (num == 0)
		str[len] = '0';
	while (num > 0)
	{
		str[len--] = (num % 10) + '0';
		num /= 10;
	}
	len = ft_putstr(str);
	free(str);
	return (len);
}
