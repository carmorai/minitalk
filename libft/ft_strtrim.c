/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoren <carmoren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:10:23 by carmoren          #+#    #+#             */
/*   Updated: 2023/09/21 17:25:52 by carmoren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_charcmp(int c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static size_t	ft_strlen_charset(const char *s, const char *set)
{
	size_t	c;
	size_t	i;
	size_t	j;

	j = 0;
	j = ft_strlen(s);
	i = 0;
	c = 0;
	while (ft_charcmp(s[i], set) == 1)
		i++;
	while (ft_charcmp(s[j - 1], set) == 1)
		j--;
	while (i < j)
	{
		c++;
		i++;
	}
	return (c);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*trim;
	size_t	i;
	size_t	j;

	len = 0;
	i = 0;
	j = 0;
	len = ft_strlen_charset(s1, set);
	trim = (char *)malloc(sizeof (char) * (len + 1));
	if (!trim)
		return (NULL);
	while (ft_charcmp(s1[i], set) == 1)
		i++;
	while (j < len)
	{
		trim[j] = s1[i];
		i++;
		j++;
	}
	trim[j] = '\0';
	return (trim);
}