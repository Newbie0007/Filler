/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tngwenya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/21 09:15:13 by tngwenya          #+#    #+#             */
/*   Updated: 2018/09/03 12:07:59 by tngwenya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H
# include "../libft/libft.h"

typedef struct		s_filler
{
	char			player;
	char			loser;
	int				x_map;
	int				y_map;
	char			**map;
	int				x_token;
	int				y_token;
	char			**token;
	int				player_x;
	int				player_y;
	int				loser_x;
	int				loser_y;
	int				loop;
	int				trim_y;
	int				trim_x;
	int				trim_xx;
	int				trim_yy;
	int				flag;
	int				vy;
	int				vx;
	int				ey;
	int				ex;
	int				x;
	int				y;
	int				dist;
	struct s_filler	*next;
}					t_filler;

typedef struct		s_dist
{
	int				dist;
	struct s_dist	*next;
}					t_dist;

int					find_map(t_filler *pen);
int					find_token(t_filler *pen, char *line);
void				position(t_filler *pen);
int					ft_filler(t_filler *pen, t_dist	*dist);
int					ft_filler1(t_filler *pen, t_dist *dist);
void				ft_print_zero(void);
int					find_place(t_filler *pen, int mx, int my);
void				ft_trim_token(t_filler *pen);
void				ft_point(t_filler *pen);
void				enemydist(t_filler *pen, t_dist *dist);
void				placepiece(t_filler *pen, t_dist *dist);
int					distance(int ey, int ex, int py, int px);
void				bestdist(t_filler *pen, t_dist *disty);
void				initialize(t_filler *pen);

#endif
