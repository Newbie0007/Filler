/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 09:11:43 by fmakgato          #+#    #+#             */
/*   Updated: 2018/05/24 09:13:56 by fmakgato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *s;
	char *d;

	s = (char*)src;
	d = (char*)dst;
	if (s < d)
		while (len--)
		{
			d[len] = s[len];
		}
	else
		ft_memcpy(d, s, len);
	return (dst);
}
