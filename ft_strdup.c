/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleitao <mleitao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 22:16:43 by mleitao           #+#    #+#             */
/*   Updated: 2026/03/12 22:32:19 by mleitao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	slen;
	char	*res;

	slen = ft_strlen(s);
	res = malloc(sizeof(char) * (slen + 1));
	if (!res)
		return (NULL);
	return (ft_memcpy(res, s, slen + 1));
}
