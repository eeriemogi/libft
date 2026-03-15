/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleitao <mleitao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 14:49:46 by mleitao           #+#    #+#             */
/*   Updated: 2026/03/15 16:43:52 by mleitao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n <= 0)
		count = 1;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static void	itoa(char *s, int n, int len)
{
	if (n < 0)
	{
		*s = '-';
		n = -n;
	}
	while (n > 0)
	{
		*(s + --len) = (n % 10) + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	char	*s;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	len = count_digits(n);
	s = malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	*(s + len) = '\0';
	if (!n)
	{
		*s = '0';
		return (s);
	}
	itoa(s, n, len);
	return (s);
}
