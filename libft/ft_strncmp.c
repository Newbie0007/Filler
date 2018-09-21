/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 14:48:05 by fmakgato          #+#    #+#             */
/*   Updated: 2018/06/11 10:43:20 by fmakgato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if (n == 0)
		return (0);
	else
	{
		while (--n && *s1 && *s2 && ((unsigned char)*s1 == (unsigned char)*s2))
		{
			++s1;
			++s2;
		}
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
