/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ltalia <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:19:00 by ltalia            #+#    #+#             */
/*   Updated: 2021/11/10 17:19:07 by ltalia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>

# define BUFFER_SIZE 42

char	*get_next_line(int fd);
char	*ft_read_to_str(int fd, char *str);
void	*ft_memchr(char *s, int c, size_t n);
char	*ft_strjoin(char *str, char *buff);
size_t	ft_strlen(char *s);
char	*ft_get_line(char *str);
char	*ft_new_str(char *str);

#endif
