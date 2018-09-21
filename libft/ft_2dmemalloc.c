/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2dmemaloc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 11:30:40 by tngwenya          #+#    #+#             */
/*   Updated: 2018/08/20 08:14:13 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_2dmemalloc(char ***arr, size_t n, size_t m)
{
	*arr = (char**)malloc(sizeof(char*) * n + 1);
	size_t i;

	i = 0;
	while (i < n)
	{
		(*arr)[i] = (char*)malloc(sizeof(char) * m + 1);
		i++;
	}
	return (*arr);
}
