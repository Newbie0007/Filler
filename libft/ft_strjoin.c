/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 08:51:10 by fmakgato          #+#    #+#             */
/*   Updated: 2018/06/11 10:24:33 by fmakgato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *dest;
	char *out;

	if (s1 && s2)
	{
		dest = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
		if (dest)
		{
			out = dest;
			while (*s1 != '\0')
				*dest++ = *s1++;
			while (*s2 != '\0')
				*dest++ = *s2++;
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
