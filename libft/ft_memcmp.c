/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 09:05:44 by fmakgato          #+#    #+#             */
/*   Updated: 2018/05/24 09:08:48 by fmakgato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *a;
	unsigned char *b;

	a = (unsigned char*)s1;
	b = (unsigned char*)s2;
	if (n == 0)
		return (0);
	while (*a == *b & n-- > 0)
	{
		a++;
		b++;
		if (n == 0)
			return (0);
	}
	if (*a != *b)
	{
		return (*a - *b);
	}
	return (0);
}
