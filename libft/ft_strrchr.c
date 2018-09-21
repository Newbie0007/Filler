/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmakgato <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 16:33:28 by fmakgato          #+#    #+#             */
/*   Updated: 2018/05/23 16:35:50 by fmakgato         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	if (s)
	{
		while (s[i] != (char)c && i >= 0)
			i--;
		if (s[i] == (char)c)
			return ((char*)&s[i]);
		else
			return (NULL);
	}
	return (NULL);
}
