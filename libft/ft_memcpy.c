/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 10:23:18 by fmakgato          #+#    #+#             */
/*   Updated: 2018/05/28 10:25:35 by fmakgato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char *a;
	char *b;

	a = (char*)src;
	b = (char*)dst;
	while (n--)
	{
		*b++ = *a++;
	}
	return (dst);
}
