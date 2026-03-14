/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleitao <mleitao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 18:34:00 by mleitao           #+#    #+#             */
/*   Updated: 2026/03/14 02:32:58 by mleitao          ###   ########.fr       */
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

static char	*start_word(const char *s, char c)
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

static void	split(char **r, char const *s, char c)
{
	char	*ewrd;
	char	*wrd;
	char	**p;

	p = r;
	while (*s)
	{
		s = start_word(s, c);
		if (!*s)
			break ;
		ewrd = end_word(s, c);
		wrd = malloc(sizeof(char) * (ewrd - s + 1));
		if (!wrd)
		{
			while (p != r)
				free(*--p);
			free(r);
			return ;
		}
		ft_strlcpy(wrd, s, ewrd - s + 1);
		*p++ = wrd;
		s = ewrd;
	}
	*p = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**r;

	if (!s)
		return (NULL);
	r = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!r)
		return (NULL);
	split(r, s, c);
	return (r);
}
