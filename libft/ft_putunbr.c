/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoren <carmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:08:57 by carmoren          #+#    #+#             */
/*   Updated: 2023/09/21 17:08:58 by carmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_putunbr(unsigned int n)
{
	unsigned long	number;
	size_t			count;

	count = 0;
	number = 0;
	number = (unsigned long) n;
	if (number > 9)
	{
		ft_putnbr(number / 10);
		ft_putnbr(number % 10);
	}
	if (number <= 9)
	{
		ft_putchar(number + '0');
		count++;
	}
	return (count);
}
