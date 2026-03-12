/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleitao <mleitao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 15:38:05 by mleitao           #+#    #+#             */
/*   Updated: 2026/03/12 16:05:19 by mleitao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*usp;

	usp = (const unsigned char *)s;
	while (n--)
		if (*usp++ == (unsigned char)c)
			return ((void *)(usp - 1));
	return (NULL);
}
