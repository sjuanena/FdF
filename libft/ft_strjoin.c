/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <sjuanena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 11:36:34 by sjuanena          #+#    #+#             */
/*   Updated: 2021/06/22 19:00:40 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const	*s1, char const	*s2)
{
	char	*src;
	size_t	i;
	size_t	j;

	while (s1 != NULL && s2 != NULL)
	{
		src = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
		if (src == NULL)
			return (0);
		i = ft_strlen(s1);
		j = 0;
		while (i > j)
		{
			src[j] = s1[j];
			j++;
		}
		i = 0;
		while (j < (ft_strlen(s1) + ft_strlen(s2)))
		{
			src[j++] = s2[i++];
		}
		src[j] = '\0';
		return (src);
	}
	return (0);
}
