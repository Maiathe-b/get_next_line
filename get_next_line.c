/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jomaia <jomaia@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 15:39:47 by jomaia            #+#    #+#             */
/*   Updated: 2025/05/23 16:00:08 by jomaia           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char const *str)
{
	int	len;

	len = 0;
	if(!str)
		return(0);
	while(str[len] != '\n')
		len++;
	if(str[len] == '\n')
		len++;
	return (len);
}

int	ft_strjoin(char const *s1, char const *s2)
{
	
}
