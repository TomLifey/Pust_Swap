/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabutair <mabutair@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 12:16:06 by mabutair          #+#    #+#             */
/*   Updated: 2026/09/28 12:36:50 by mabutair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			index;

	ptr1 = (unsigned char *)src;
	ptr2 = (unsigned char *)dest;
	index = 0;
	if (!dest && !src)
		return (NULL);
	while (index < count)
	{
		ptr2[index] = ptr1[index];
		index++;
	}
	return (dest);
}
