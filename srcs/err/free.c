/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 01:33:53 by bducrocq          #+#    #+#             */
/*   Updated: 2022/11/23 14:40:39 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub3d.h"

static void	ft_free_all(t_main *main)
{
	free(main->ps.map_path);
}

/**
 * @brief free and exit(0)
 * 
 * @param main 
 */
void	ft_free_all_and_exit(t_main *main)
{
	ft_free_all(main);
	exit(0);
}

/**
 * @brief free and exit(error)
 * 
 * @param main 
 * @param error 
 */
void	ft_free_all_and_exit_err(t_main *main, int error)
{
	ft_free_all(main);
	exit(error);
}