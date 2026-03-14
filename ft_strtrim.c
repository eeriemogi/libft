/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleitao <mleitao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 18:02:43 by mleitao           #+#    #+#             */
/*   Updated: 2026/03/14 02:09:14 by mleitao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	in_set(char c, char const *set)
{
	while (*set)
		if (*set++ == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*s;
	const char	*e;
	char		*r;

	if (!s1 || !set)
		return (NULL);
	s = s1;
	while (*s && in_set(*s, set))
		s++;
	e = s1 + ft_strlen(s1);
	while (e > s && in_set(*(e - 1), set))
		e--;
	r = malloc(e - s + 1);
	if (!r)
		return (NULL);
	ft_strlcpy(r, s, e - s + 1);
	return (r);
}
