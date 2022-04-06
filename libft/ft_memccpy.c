/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <sjuanena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0001/06/06 10:47:38 by anena             #+#    #+#             */
/*   Updated: 2021/06/22 18:38:33 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst1;
	unsigned char	*src1;
	size_t			i;

	i = 0;
	dst1 = (unsigned char *) dst;
	src1 = (unsigned char *) src;
	while (i < n)
	{
		dst1[i] = src1[i];
		if (src1[i] == (unsigned char) c)
			return (dst + i + 1);
		i++;
	}
	return (0);
}
