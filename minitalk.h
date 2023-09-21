/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoren <carmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:12:49 by carmoren          #+#    #+#             */
/*   Updated: 2023/09/21 17:12:50 by carmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include "libft/libft.h"
# include "printf_nolib/ft_printf.h"

int		count_numbers(int number);
void	swap(int *binary, int number, int i, int c);
void	pad(int *binary, int pad);

#endif