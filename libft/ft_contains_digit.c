/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_contains_digit.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoren <carmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:04:40 by carmoren          #+#    #+#             */
/*   Updated: 2023/09/21 17:04:43 by carmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_contains_digit(char *str)
{
	while (*str)
	{	
		if (ft_isdigit(*str) == 0 && *str != ' ' && *str != '\"')
			return (0);
		str++;
	}
	return (1);
}
