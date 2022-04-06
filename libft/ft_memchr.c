/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <sjuanena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0001/06/06 11:39:17 by anena             #+#    #+#             */
/*   Updated: 2021/06/21 17:46:38 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void	*s, int	c, size_t	n)
{
	size_t		i;
	char		*src;

	i = 0;
	src = (char *) s;
	while (i < n)
	{
		if (src[i] == (char) c)
			return ((void *)s + i);
		i++;
	}
	return (0);
}
