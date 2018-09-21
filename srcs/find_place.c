/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_place.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 09:22:14 by tngwenya          #+#    #+#             */
/*   Updated: 2018/09/02 15:33:12 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		find_place(t_filler *pen, int mx, int my)
{
	int	tx;

	initialize(pen);
	while (my + pen->y < -1)
		pen->y++;
	while (mx + pen->x < -1)
		pen->x++;
	tx = pen->x;
	while (++(*pen).y < pen->y_token && (pen->x = tx))
		while (++pen->x < (*pen).x_token)
		{
			if (((my + pen->y) >= pen->y_map || (((mx + pen->x) >= pen->x_map) \
							&& pen->token[pen->y][pen->x] == '*')))
				return (-1);
			if ((*pen).token[pen->y][pen->x] == '*' \
					&& pen->map[my + pen->y][mx + pen->x] == pen->loser)
				return (-1);
			if ((pen->map[my + pen->y][mx + pen->x] == pen->player \
				|| pen->map[my + pen->y][mx + pen->x] == pen->player - 32)\
					&& pen->token[pen->y][pen->x] == '*')
				pen->loop++;
		}
	if (pen->loop != 1)
		return (-1);
	return (1);
}
