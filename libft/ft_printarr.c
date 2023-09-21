/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printarr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoren <carmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:07:52 by carmoren          #+#    #+#             */
/*   Updated: 2023/09/21 17:07:53 by carmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printarr(int *arr, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putnbr_fd(arr[i], 1);
		ft_putchar_fd('\n', 1);
		i++;
	}
}
