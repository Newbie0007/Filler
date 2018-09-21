/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 08:53:37 by tngwenya          #+#    #+#             */
/*   Updated: 2018/09/02 13:19:10 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int		main(void)
{
	char		*line;
	t_filler	*pen;
	t_dist		*dist;

	dist = ft_memalloc(sizeof(t_dist));
	if (!(pen = ft_memalloc(sizeof(t_filler))))
		return (-1);
	get_next_line(0, &line);
	(*pen).player = (ft_atoi(line + 10) == 1) ? 'O' : 'X';
	while (1)
	{
		if (get_next_line(0, &line) == 0)
			break ;
		(*pen).y_map = ft_atoi(line + 8);
		(*pen).x_map = ft_atoi(line + 11);
		find_map(pen);
		position(pen);
		if (ft_filler(pen, dist) == 0)
			return (0);
	}
	free(line);
	free(pen);
	free(dist);
	return (0);
}
