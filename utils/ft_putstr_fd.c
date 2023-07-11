/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 13:39:01 by ltalia            #+#    #+#             */
/*   Updated: 2021/10/24 13:39:03 by ltalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long.h"

void	ft_putstr_fd(char *s, int fd)
{
	unsigned char	*str;
	int				i;

	i = 0;
	if (s == NULL)
		return ;
	str = (unsigned char *)s;
	while (str[i])
	{
		ft_putchar_fd(str[i], fd);
		i++;
	}
}
