/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabutair <mabutair@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 22:24:21 by mabutair          #+#    #+#             */
/*   Updated: 2026/10/06 14:15:32 by mabutair         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_count(const char *s, char c)
{
	size_t	index;
	size_t	count;
	int		in_word;

	index = 0;
	count = 0;
	in_word = 0;
	while (s[index])
	{
		if (s[index] == c)
			in_word = 0;
		else if (!in_word)
		{
			count++;
			in_word = 1;
		}
		index++;
	}
	return (count);
}

static char	*fill_word(const char *s, size_t start, size_t len)
{
	char	*word;
	size_t	index;

	word = malloc(len + 1);
	if (!word)
		return (NULL);
	index = 0;
	while (index < len)
	{
		word[index] = s[start + index];
		index++;
	}
	word[index] = '\0';
	return (word);
}

static void	free_split(char **s)
{
	size_t	index;

	index = 0;
	while (s[index])
	{
		free(s[index]);
		index++;
	}
	free(s);
}

static int	fill_split(char **ptr, const char *s, char c)
{
	size_t	index;
	size_t	jndex;
	size_t	start;

	index = 0;
	jndex = 0;
	while (s[index])
	{
		while (s[index] == c)
			index++;
		if (!s[index])
			break ;
		start = index;
		while (s[index] && s[index] != c)
			index++;
		ptr[jndex] = fill_word(s, start, index - start);
		if (!ptr[jndex])
			return (0);
		jndex++;
	}
	ptr[jndex] = NULL;
	return (1);
}

char	**ft_split(const char *s, char c)
{
	char	**ptr;
	size_t	patren;

	if (!s)
		return (NULL);
	patren = word_count(s, c);
	ptr = ft_calloc(patren + 1, sizeof(char *));
	if (!ptr)
		return (NULL);
	if (!fill_split(ptr, s, c))
	{
		free_split(ptr);
		return (NULL);
	}
	return (ptr);
}
