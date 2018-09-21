/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 08:53:05 by tngwenya          #+#    #+#             */
/*   Updated: 2018/09/02 15:22:47 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int	find_map(t_filler *pen)
{
	char	*line;
	int		i;

	i = 0;
	if (!(pen->map = ft_2dmemalloc(&pen->map, pen->y_map, pen->x_map)))
		return (-1);
	get_next_line(0, &line);
	while (i < (*pen).y_map)
	{
		get_next_line(0, &line);
		(*pen).map[i] = ft_strdup(line + 4);
		i++;
	}
	(*pen).map[i] = NULL;
	find_token(pen, line);
	return (0);
}
