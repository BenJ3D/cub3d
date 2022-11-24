/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 02:44:28 by mal-guna          #+#    #+#             */
/*   Updated: 2022/11/24 01:40:31 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H
# include "cub3d.h"
# include "struct_parsing.h"

typedef struct s_vector
{
	int				x;
	int				y;
	int				z;
}				t_vector;

typedef struct s_data
{
	void			*img;
	char			*addr;
	int				bpp;
	int				line_length;
	int				endian;
}				t_data;


typedef struct s_game
{
	char			**map;
	t_vector		c_rgb; // ceiling color RGB (xyz)
	t_vector		f_rgb; // floor color RGB (xyz)
	t_data			imgNO;
	t_data			imgSO;
	t_data			imgWE;
	t_data			imgEA;
}				t_game;

typedef struct s_main
{
	t_data			db;
	t_pars			ps; //tout pour le parsing
	t_game			gm; //setup regles avec les couleurs, resolution, path textures/map etc
	void			*mlx;
	void			*mlx_win;
}				t_main;

#endif
