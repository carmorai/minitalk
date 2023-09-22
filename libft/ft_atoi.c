/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoren <carmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:04:10 by carmoren          #+#    #+#             */
/*   Updated: 2023/09/22 12:57:31 by carmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	is_space(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	result;
	int	sign;

	result = 0;
	i = 0;
	sign = 0;
	while (is_space(str[i]) == 1)
		i++;
	while ((str[i] == 43 || str[i] == 45) && sign == 0)
	{
		if (str[i] == 45)
			sign = 2;
		else
			sign = 1;
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9'))
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	if (sign == 2)
		result *= -1;
	return (result);
}
