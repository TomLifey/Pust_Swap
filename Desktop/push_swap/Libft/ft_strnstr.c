/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabutair <mabutair@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 16:07:01 by mabutair          #+#    #+#             */
/*   Updated: 2026/10/03 22:35:46 by mabutair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	index;
	size_t	jndex;

	index = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (index < len && haystack[index] != '\0')
	{
		jndex = 0;
		while ((index + jndex) < len && haystack[index
				+ jndex] == needle[jndex])
		{
			jndex++;
			if (needle[jndex] == '\0')
				return ((char *)haystack + index);
		}
		index++;
	}
	return (NULL);
}
