/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomaia <jomaia@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 15:40:21 by jomaia            #+#    #+#             */
/*   Updated: 2025/05/30 11:25:28 by jomaia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdio.h>
# include <unistd.h>
# include <limits.h>
# include <stdlib.h>
# include <fcntl.h>
# include <ctype.h>
# include <stdarg.h>
# include <string.h>
# include <strings.h>
# include <stddef.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

int		ft_strlen(char const *str);
char	*ft_strjoin(char *s1, char *s2);
int		reset_buffer(char *buffer);
int		find_new_line(char *s);
char	*get_next_line(int fd);

#endif
