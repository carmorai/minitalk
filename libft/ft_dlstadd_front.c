/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_front.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoren <carmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:04:56 by carmoren          #+#    #+#             */
/*   Updated: 2023/09/21 17:04:58 by carmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_dlstadd_front(t_dlist **lst, t_dlist *new)
{	
	if (lst)
	{
		if (!new)
			return ;
		if (*lst == NULL)
		{
			*lst = new;
			new->prev = NULL;
			new->next = NULL;
		}
		else
		{
			new->next = *lst;
			new->prev = NULL;
			*lst = new;
		}
	}
}
