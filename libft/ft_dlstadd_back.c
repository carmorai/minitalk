/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstadd_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoren <carmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:04:48 by carmoren          #+#    #+#             */
/*   Updated: 2023/09/21 17:23:36 by carmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_dlstadd_back(t_dlist **head, t_dlist **tail, t_dlist *new)
{
	t_dlist	*curr;

	if (!new)
		return ;
	if (*head == NULL)
	{	
		*head = new;
		*tail = new;
		return ;
	}
	curr = *head;
	curr = ft_dlstlast(curr);
	curr->next = new;
	new->prev = curr;
	new->next = NULL;
	*tail = new;
}