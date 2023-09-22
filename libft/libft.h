/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoren <carmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:11:05 by carmoren          #+#    #+#             */
/*   Updated: 2023/09/22 11:59:50 by carmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}		t_list;

typedef struct s_double_list
{
	int						content;
	struct s_double_list	*next;
	struct s_double_list	*prev;
}		t_dlist;

/* 
libc
*/
int			ft_atoi(const char *str);
void		ft_bzero(void *s, size_t n);
void		*ft_calloc(size_t count, size_t size);
char		*ft_itoa(int n);
size_t		ft_putchar(char c);
void		ft_putchar_fd(char c, int fd);
void		ft_reverse_tab(int *tab, int n);

#endif
