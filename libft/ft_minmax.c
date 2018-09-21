/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minmax.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 10:58:44 by tngwenya          #+#    #+#             */
/*   Updated: 2018/06/07 11:50:37 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int		ft_minmax(int x)
{
	if (x == INT_MIN)
		return (INT_MIN);
	if (x == INT_MAX)
		return (INT_MAX);
	return (INT_MIN);
}
