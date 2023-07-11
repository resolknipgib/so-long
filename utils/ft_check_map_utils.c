/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:17:35 by ltalia            #+#    #+#             */
/*   Updated: 2022/03/26 19:17:38 by ltalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

static char	*ft_err_message(t_map_vars *map)
{
	if (map->c == 0)
		return (
			"ERROR: element 'C' is missing");
	if (map->p == 0)
		return (
			"ERROR: element 'P' is missing");
	if (map->e == 0)
		return (
			"ERROR: element 'E' is missing");
	if (map->p == 0)
		return (
			"ERROR: element 'P' is missing");
	if (map->p > 1)
		return (
			"ERROR: there is more then one element 'P'");
	return ("ERROR: element missing in the map");
}

char	*unknown_element(t_vars ***v, char c)
{
	int	x;

	x = 0;
	while ((**v)->map[x])
	{
		free((**v)->map[x]);
		x++;
	}
	free((**v)->map);
	ft_putstr_fd("ERROR: Unknown element ", 1);
	ft_putstr_fd(&c, 1);
	exit(1);
}

void	check_elements(t_vars **vars)
{
	t_map_vars	map;

	map.c = 0;
	map.p = 0;
	map.e = 0;
	map.y = get_height((*vars)->map) - 1;
	while (map.y--)
	{
		map.x = 0;
		while ((*vars)->map[map.y][map.x] != '\0')
		{
			if ((*vars)->map[map.y][map.x] == 'E')
				map.e++;
			else if ((*vars)->map[map.y][map.x] == 'P')
				map.p++;
			else if ((*vars)->map[map.y][map.x] == 'C')
				map.c++;
			else if ((*vars)->map[map.y][map.x] != '1' &&
				(*vars)->map[map.y][map.x] != '0')
				unknown_element(&vars, (*vars)->map[map.y][map.x]);
			map.x++;
		}
	}
	if (map.c == 0 || map.p == 0 || map.e == 0 || map.p > 1)
		ft_error(&vars, ft_err_message(&map));
}
