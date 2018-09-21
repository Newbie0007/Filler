/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 08:48:43 by fmakgato          #+#    #+#             */
/*   Updated: 2018/06/11 10:36:02 by fmakgato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char		*out;
	char		*str;
	char const	*src;

	if (s)
	{
		str = ft_strnew(len);
		out = str;
		src = &s[start];
		if (str)
		{
			while (*src != '\0' && len > 0)
			{
				*str++ = *src++;
				len--;
			}
			return (out);
		}
		else
		{
			return (NULL);
		}
	}
	else
		return (NULL);
}
