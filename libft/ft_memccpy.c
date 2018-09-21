/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 12:40:00 by fmakgato          #+#    #+#             */
/*   Updated: 2018/05/28 12:40:09 by fmakgato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *s;
	unsigned char *d;

	s = (unsigned char*)src;
	d = (unsigned char*)dst;
	while (n-- > 0)
	{
		*d = *s;
		if (*s == (unsigned char)c)
			return ((void*)d + 1);
		s++;
		d++;
	}
	return (NULL);
}
