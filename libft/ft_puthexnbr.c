/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoren <carmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:08:32 by carmoren          #+#    #+#             */
/*   Updated: 2023/09/21 17:08:33 by carmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_puthexnbr(unsigned int n, char *base)
{
	long	number;
	size_t	count;	
	size_t	len_base;

	len_base = ft_strlen(base);
	count = 0;
	number = 0;
	number = n;
	if (number < 0)
	{
		number *= -1;
		ft_putchar('-');
	}
	if (number >= (long) len_base)
	{
		ft_puthexnbr(number / len_base, base);
		ft_puthexnbr(number % len_base, base);
	}
	if (number < (long) len_base)
	{	
		ft_putchar(base[number]);
		count++;
	}
	return (count);
}
