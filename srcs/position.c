/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 08:53:39 by tngwenya          #+#    #+#             */
/*   Updated: 2018/09/02 15:33:01 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void		position(t_filler *pen)
{
	int		i;
	int		j;

	i = 0;
	(*pen).loser = ((*pen).player == 'O') ? 'X' : 'O';
	while (i < (*pen).y_map)
	{
		j = 0;
		while (j < (*pen).x_map)
		{
			if ((*pen).map[i][j] == (*pen).loser)
			{
				(*pen).loser_x = j;
				(*pen).loser_y = i;
			}
			if ((*pen).map[i][j] == (*pen).player)
			{
				(*pen).player_x = j;
				(*pen).player_y = i;
			}
			j++;
		}
		i++;
	}
}

void		initialize(t_filler *pen)
{
	pen->x = -1;
	pen->y = -1;
	pen->loop = 0;
}
