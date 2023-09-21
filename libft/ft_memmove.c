/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoren <carmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:07:41 by carmoren          #+#    #+#             */
/*   Updated: 2023/09/21 17:24:40 by carmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;

	i = 0;
	if ((unsigned char *) dst == (unsigned char *) src)
		return (dst);
	if ((unsigned char *) dst < (unsigned char *) src)
	{
		while (i < n)
		{
			((unsigned char *) dst)[i] = ((unsigned char *) src)[i];
			i++;
		}	
	}
	else
	{	
		i = n;
		while (i > 0)
		{
			((unsigned char *) dst)[i - 1] = ((unsigned char *) src)[i - 1];
			i--;
		}
	}
	return (dst);
}
