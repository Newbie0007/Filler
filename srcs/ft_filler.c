/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filler.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 00:06:07 by tngwenya          #+#    #+#             */
/*   Updated: 2018/09/03 12:56:13 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		ft_filler(t_filler *pen, t_dist *dist)
{
	int			i;
	int			j;
	t_filler	*head;

	head = pen;
	i = -1;
	ft_trim_token(pen);
	while (++i < pen->y_map)
	{
		j = -1;
		while (++j < pen->x_map)
		{
			if (find_place(pen, j - pen->trim_x, i - pen->trim_y) == 1)
			{
				head->next = ft_memalloc(sizeof(t_filler));
				head->vy = i - pen->trim_y;
				head->vx = j - pen->trim_x;
				head = head->next;
			}
		}
	}
	head->next = NULL;
	enemydist(pen, dist);
	return (1);
}

int		distance(int ey, int ex, int py, int px)
{
	int xsqr;
	int ysqr;
	int dist;

	xsqr = (ex - px) * (ex - px);
	ysqr = (ey - py) * (ey - py);
	dist = xsqr + ysqr;
	return (dist);
}

void	enemydist(t_filler *pen, t_dist *dist)
{
	int y;
	int x;
	int v;

	v = 0;
	y = -1;
	while (++y < pen->y_map)
	{
		x = pen->x_map;
		while (--x > 0)
		{
			if (pen->map[y][x] == pen->loser)
			{
				pen->ey = y;
				pen->ex = x;
				v++;
				break ;
			}
		}
		if (v > 0)
			break ;
	}
	placepiece(pen, dist);
}

void	placepiece(t_filler *pen, t_dist *dist)
{
	t_filler	*head;
	t_dist		*best;
	int			e1y;
	int			e1x;

	head = pen;
	best = dist;
	e1y = head->ey;
	e1x = head->ex;
	while (head->next)
	{
		best->next = ft_memalloc(sizeof(t_dist));
		best->dist = distance(e1y, e1x, head->vy, head->vx);
		head = head->next;
		best = best->next;
	}
	best->next = NULL;
	bestdist(pen, dist);
}

void	bestdist(t_filler *pen, t_dist *disty)
{
	int		v1y;
	int		v1x;
	int		min;

	min = 0;
	while (disty->next)
	{
		if (min == 0 || min > disty->dist)
		{
			min = disty->dist;
			v1y = pen->vy;
			v1x = pen->vx;
		}
		pen = pen->next;
		disty = disty->next;
	}
	ft_putnbr(v1y);
	ft_putchar(' ');
	ft_putnbr(v1x);
	ft_putchar('\n');
}
