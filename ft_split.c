/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleitao <mleitao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 18:34:00 by mleitao           #+#    #+#             */
/*   Updated: 2026/03/14 00:04:35 by mleitao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	w;

	w = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			w++;
			while (*s && *s != c)
				s++;
		}
	}
	return (w);
}

static char	*next_word(const char *s, char c)
{
	while (*s && *s == c)
		s++;
	return ((char *)s);
}

static char	*end_word(const char *s, char c)
{
	while (*s && *s != c)
		s++;
	return ((char *)s);
}

static void	split(char **r, char **p, char const *s, char c)
{
	char	*ewrd;
	char	*wrd;
	size_t	wrdl;

	while (*s)
	{
		s = next_word(s, c);
		if (!*s)
			break ;
		ewrd = end_word(s, c);
		wrdl = ewrd - s;
		wrd = malloc(sizeof(char) * (wrdl + 1));
		if (!wrd)
		{
			while (p != r)
				free(*--p);
			free(r);
			return ;
		}
		while (s < ewrd)
			*wrd++ = *s++;
		*wrd = '\0';
		*r++ = wrd - wrdl;
	}
	*r = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**r;
	char	**p;

	if (!s)
		return (NULL);
	r = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!r)
		return (NULL);
	p = r;
	split(r, p, s, c);
	return (r);
}
