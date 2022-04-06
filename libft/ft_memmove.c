/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <sjuanena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0001/06/06 10:35:05 by anena             #+#    #+#             */
/*   Updated: 2021/06/21 17:45:39 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst1;
	unsigned char	*src1;

	dst1 = (unsigned char *) dst;
	src1 = (unsigned char *) src;
	if (src < dst)
	{
		while (len > 0)
		{
			len--;
			dst1[len] = src1[len];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
