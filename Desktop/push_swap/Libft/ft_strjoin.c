/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabutair <mabutair@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 14:47:07 by mabutair          #+#    #+#             */
/*   Updated: 2026/10/05 17:13:35 by mabutair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ptr;
	size_t	index;
	size_t	jndex;

	if (!s1 || !s2)
		return (NULL);
	index = 0;
	jndex = 0;
	ptr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!ptr)
		return (NULL);
	while (s1[index] != '\0')
	{
		ptr[index] = s1[index];
		index++;
	}
	while (s2[jndex] != '\0')
	{
		ptr[index] = s2[jndex];
		index++;
		jndex++;
	}
	ptr[index] = '\0';
	return (ptr);
}
