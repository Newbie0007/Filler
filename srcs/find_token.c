/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_token.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 08:53:33 by tngwenya          #+#    #+#             */
/*   Updated: 2018/09/02 14:07:40 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"

int	find_token(t_filler *pen, char *line)
{
	int		i;

	i = 0;
	get_next_line(0, &line);
	(*pen).y_token = ft_atoi(line + 6);
	(*pen).x_token = ft_atoi(line + 8);
	if (!(pen->token = ft_2dmemalloc(&pen->token, pen->y_token, pen->x_token)))
		return (-1);
	while (i < (*pen).y_token)
	{
		get_next_line(0, &line);
		(*pen).token[i] = ft_strdup(line);
		i++;
	}
	(*pen).token[i] = NULL;
	return (0);
}
