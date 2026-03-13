/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleitao <mleitao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 16:31:21 by mleitao           #+#    #+#             */
/*   Updated: 2026/03/13 17:57:47 by mleitao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	ls1;
	size_t	ls2;
	char	*res;

	if (!s1 || !s2)
		return (NULL);
	ls1 = ft_strlen(s1);
	ls2 = ft_strlen(s2);
	res = malloc(sizeof(char) * (ls1 + ls2 + 1));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1, ls1 + 1);
	ft_strlcat(res, s2, ls1 + ls2 + 1);
	return (res);
}
