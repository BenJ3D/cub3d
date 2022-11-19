/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bducrocq <bducrocq@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 01:33:53 by bducrocq          #+#    #+#             */
/*   Updated: 2022/11/19 01:18:33 by bducrocq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub3d.h"

int	ft_pars_check_if_legal_char(char c)
{
	char	legal[] = " SNEW01";
	int		i;

	i = 0;
	while(legal[i])
	{
		if (c != legal[i])
			return (EXIT_FAILURE);
		i++;
	}
	return (EXIT_SUCCESS);
}