/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleitao <mleitao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:27:11 by mleitao           #+#    #+#             */
/*   Updated: 2026/03/12 20:10:04 by mleitao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	llen;

	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	llen = len;
	while (llen-- && *s)
		*res++ = *(s++ + start);
	*res = '\0';
	return (res - len - 1);
}
