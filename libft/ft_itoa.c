/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoren <carmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:05:52 by carmoren          #+#    #+#             */
/*   Updated: 2023/09/22 12:58:29 by carmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	ft_number_count(long n)
{
	int	c;

	c = 1;
	if (n < 0)
		n *= -1;
	n /= 10;
	while (n > 0)
	{
		n /= 10;
		c++;
	}
	return (c);
}

void	ft_reverse(char *str, int len)
{
	int		low;
	char	swap;

	low = 0;
	if (str[0] == '-')
		low++;
	while (low < len)
	{
		swap = str[low];
		str[low] = str[len - 1];
		str[len - 1] = swap;
		low++;
		len--;
	}
}

char	*ft_conversion(long n, char *str, int len)
{
	int	i;
	int	lencpy;

	lencpy = len;
	i = 0;
	if (n < 0)
	{
		str[i++] = '-';
		n *= -1;
		len--;
	}
	while (len)
	{
		if (n > 9)
		{
			str[i++] = n % 10 + '0';
			n /= 10;
		}
		else if (n <= 9 || n == 0)
			str[i++] = n + '0';
		len--;
	}
	str[i] = '\0';
	ft_reverse(str, lencpy);
	return (str);
}

char	*ft_itoa(int n)
{
	long	number;
	int		len;
	char	*str;

	len = 0;
	number = (long) n;
	len = ft_number_count(number);
	if (n < 0)
	{
		str = (char *)malloc(sizeof (char) * (len + 2));
		if (!str)
			return (NULL);
		str = ft_conversion(n, str, len + 1);
	}
	else
	{
		str = (char *)malloc(sizeof (char) * (len + 1));
		if (!str)
			return (NULL);
		str = ft_conversion(n, str, len);
	}
	return (str);
}
