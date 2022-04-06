/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <sjuanena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0001/06/06 12:15:04 by anena             #+#    #+#             */
/*   Updated: 2021/06/21 17:50:22 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	d1;
	size_t	s1;
	size_t	pos;

	d1 = ft_strlen(dst);
	s1 = d1;
	pos = 0;
	while (src[pos] != '\0' && dstsize > 0 && d1 < (dstsize - 1))
	{
		dst[d1] = src[pos];
		pos++;
		d1++;
	}
	if (dstsize != 0 || s1 < dstsize)
		dst[d1] = '\0';
	if (d1 > (dstsize - 1) && dstsize != 0)
		return (dstsize + ft_strlen(src));
	if (dstsize != 0)
		return (s1 + ft_strlen(src));
	return (ft_strlen(src));
}
