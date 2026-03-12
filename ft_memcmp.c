/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleitao <mleitao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 16:10:49 by mleitao           #+#    #+#             */
/*   Updated: 2026/03/12 16:35:34 by mleitao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ucp1;
	unsigned char	*ucp2;

	ucp1 = (unsigned char *)s1;
	ucp2 = (unsigned char *)s2;
	while (n--)
		if (*ucp1++ != *ucp2++)
			return (*(ucp1 - 1) - *(ucp2 - 1));
	return (0);
}
