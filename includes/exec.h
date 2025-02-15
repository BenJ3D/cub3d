/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abucia <abucia@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 07:45:57 by abucia            #+#    #+#             */
/*   Updated: 2023/04/18 02:21:07 by abucia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXEC_H
# define EXEC_H
# include "cub3d.h"
# include "struct_parsing.h"

# define ANIMATION_TIME 400
# define CELL_SIZE 64
# define MAP_CELL_SIZE 30
# define LOOK_UP_DOWN 0.03

# ifndef RENDER_DIST
#  define RENDER_DIST 1024
# endif

# ifndef FOV_HORIZONTAL
#  define FOV_HORIZONTAL 0.5
# endif

# ifndef SCREEN_HEIGHT
#  define SCREEN_HEIGHT 2000
# endif

# ifndef SCREEN_WIDTH
#  define SCREEN_WIDTH 2000
# endif

# ifndef MAX_VELOCITY
#  define MAX_VELOCITY 8.34
# endif

# ifndef ROT_SPEED
#  define ROT_SPEED 0.0375
# endif

# ifndef COEF_ACCELERATION
#  define COEF_ACCELERATION 1.03
# endif

# ifndef COEF_DECELERATION
#  define COEF_DECELERATION 0.94
# endif

#endif
