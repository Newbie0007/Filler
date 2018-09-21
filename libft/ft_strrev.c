/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 07:25:09 by tngwenya          #+#    #+#             */
/*   Updated: 2018/06/05 09:22:50 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrev(char *str)
{
	char temp;
	int x;
	int y;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	x--;
	y = 0;
	while (y < x)
	{
		temp = str[x];
		str[x] = str[y];
		str[y] = temp;
		y++;
		x--;
	}
	return (str);
}
