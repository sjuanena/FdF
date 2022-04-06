/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <sjuanena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0001/05/26 15:48:06 by anena             #+#    #+#             */
/*   Updated: 2021/06/21 19:14:42 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*h, const char	*n, size_t len)
{
	size_t	i;
	size_t	j;
	int		err;

	i = -1;
	while (h[++i] != '\0' && i < len)
	{
		j = -1;
		err = -2;
		while (n[++j] != '\0')
		{
			err = 0;
			if (h[i + j] != n[j] || (i + j) >= len)
			{
				err = -1;
				break ;
			}
		}
		if (err == 0)
			return ((char *)(h + i));
	}
	if (err != -2 && ft_strlen(n) != 0)
		return (0);
	return ((char *)(h));
}
