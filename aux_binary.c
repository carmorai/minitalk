/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_binary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoren <carmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:12:37 by carmoren          #+#    #+#             */
/*   Updated: 2023/09/21 17:12:38 by carmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	count_numbers(int number)
{
	int	c;

	c = 0;
	while (number > 0)
	{	
		number /= 2;
		c++;
	}
	return (c);
}

void	swap(int *binary, int number, int i, int c)
{
	while (i < c)
	{
		if (number % 2 == 0)
			binary[i] = 0;
		else
			binary[i] = 1;
		i++;
		number /= 2;
	}
}

void	pad(int *binary, int pad)
{	
	int	i;

	i = 7;
	while (pad)
	{
		binary[i] = 0;
		i--;
		pad--;
	}
}
