/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <sjuanena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 19:30:18 by sjuanena          #+#    #+#             */
/*   Updated: 2021/06/22 19:01:00 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isCoincident(char const	s1, char const	*set)
{
	int	i;

	i = 0;
	while (set[i] != '\0')
	{
		if (set[i] == s1)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const	*s1, char const	*set)
{
	char	*src;
	int		start;
	int		end;

	if (s1 == NULL || set == NULL)
		return (0);
	end = ft_strlen(s1) - 1;
	start = 0;
	while (isCoincident(s1[start], set))
		start++;
	while (isCoincident(s1[end], set))
		end--;
	src = ft_substr(s1, start, (end - start + 1));
	return (src);
}
