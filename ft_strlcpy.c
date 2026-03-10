/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleitao <mleitao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 22:48:32 by mleitao           #+#    #+#             */
/*   Updated: 2026/03/10 17:43:41 by mleitao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	src_len;

	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	while (*src && size-- > 1)
		*dst++ = *src++;
	*dst = '\0';
	return (src_len);
}
