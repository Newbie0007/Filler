/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trail.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 13:46:18 by tngwenya          #+#    #+#             */
/*   Updated: 2018/09/02 14:37:22 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

void		ft_point(t_filler *pen)
{
	int i;
	int j;

	i = -1;
	while (++i < pen->y_map)
	{
		j = -1;
		while (++j < pen->x_map)
		{
			if (pen->map[i][j] == pen->loser)
			{
				pen->loser_x = j;
				pen->loser_y = i;
			}
		}
	}
}

void		ft_print_zero(void)
{
	ft_putnbr(0);
	ft_putchar(' ');
	ft_putnbr(0);
	ft_putchar('\n');
}

void		ft_trim_token1(t_filler *pen)
{
	int x;
	int y;
	int flag;

	x = -1;
	flag = 1;
	while (++x < (*pen).x_token && flag)
	{
		y = -1;
		while (++y < (*pen).y_token)
			if (pen->token[y][x] == '*')
			{
				pen->trim_x = x;
				flag = 0;
				break ;
			}
	}
}

void		ft_trim_token(t_filler *pen)
{
	int x;
	int y;
	int flag;

	y = -1;
	flag = 1;
	while (++y < (*pen).y_token && flag)
	{
		x = -1;
		while (++x < (*pen).x_token)
			if ((*pen).token[y][x] == '*')
			{
				flag = 0;
				pen->trim_y = y;
				break ;
			}
	}
	ft_trim_token1(pen);
}
