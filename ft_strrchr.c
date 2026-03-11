/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleitao <mleitao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 18:43:18 by mleitao           #+#    #+#             */
/*   Updated: 2026/03/11 19:01:11 by mleitao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*rptr;

	rptr = ft_strchr(s, 0);
	while (rptr > s && *rptr != (char)c)
		rptr--;
	if (rptr == s && *rptr != (char)c)
		return (NULL);
	return (rptr);
}
