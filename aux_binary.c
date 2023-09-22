/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aux_binary.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoren <carmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:12:37 by carmoren          #+#    #+#             */
/*   Updated: 2023/09/22 10:58:50 by carmoren         ###   ########.fr       */
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
