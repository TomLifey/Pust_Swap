/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabutair <mabutair@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 17:59:51 by mabutair          #+#    #+#             */
/*   Updated: 2026/10/05 20:28:07 by mabutair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	is_set(char c, char const *set)
{
	size_t	index;

	index = 0;
	while (set[index] != '\0')
	{
		if (c == set[index])
			return (1);
		index++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	index;
	char	*ptr;

	index = 0;
	start = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] != '\0' && is_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && is_set(s1[end - 1], set))
		end--;
	ptr = malloc(end - start + 1);
	if (!ptr)
		return (NULL);
	while (start + index < end)
	{
		ptr[index] = s1[start + index];
		index++;
	}
	ptr[index] = '\0';
	return (ptr);
}
