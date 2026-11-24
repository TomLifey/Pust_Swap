/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabutair <mabutair@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 22:03:47 by mabutair          #+#    #+#             */
/*   Updated: 2026/10/13 22:20:00 by mabutair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			index;

	ptr = (unsigned char *)str;
	index = 0;
	while (index < n)
	{
		if (ptr[index] == (unsigned char)c)
			return (&ptr[index]);
		index++;
	}
	return (NULL);
}
