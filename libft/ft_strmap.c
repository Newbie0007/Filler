/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/25 09:49:09 by fmakgato          #+#    #+#             */
/*   Updated: 2018/06/11 10:26:21 by fmakgato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *out_m;
	char *out_o;

	if (f && s)
	{
		out_o = ft_strnew(ft_strlen(s));
		if (!out_o)
			return (NULL);
		out_m = out_o;
		while (*s != '\0')
		{
			*out_m++ = f(*s++);
		}
		return (out_o);
	}
	return (NULL);
}
