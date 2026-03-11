/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleitao <mleitao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 23:34:28 by mleitao           #+#    #+#             */
/*   Updated: 2026/03/11 16:44:21 by mleitao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*dptr;
	size_t	ssize;
	size_t	dlen;
	size_t	slen;

	dptr = dst;
	ssize = size;
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	while (*dptr && ssize-- > 1)
		dptr++;
	if (size <= dlen)
		return (size + slen);
	while (*src && dlen + 1 < size--)
		*dptr++ = *src++;
	*dptr = '\0';
	return (dlen + slen);
}
