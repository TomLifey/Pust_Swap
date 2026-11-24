/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabutair <mabutair@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 16:24:12 by mabutair          #+#    #+#             */
/*   Updated: 2026/11/24 15:22:47 by mabutair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*ptr1;
	unsigned char		*ptr2;

	if (!dest && !src)
		return (NULL);
	ptr1 = (const unsigned char *)src;
	ptr2 = (unsigned char *)dest;
	if (ptr2 <= ptr1)
	{
		while (n--)
			*ptr2++ = *ptr1++;
	}
	else
	{
		while (n--)
			ptr2[n] = ptr1[n];
	}
	return (dest);
}
