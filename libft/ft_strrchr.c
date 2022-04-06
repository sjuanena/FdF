/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <sjuanena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0001/06/07 19:45:19 by anena             #+#    #+#             */
/*   Updated: 2021/06/22 18:51:30 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	j;

	i = 0;
	j = -1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			j = i;
		i++;
	}	
	if (s[i] == '\0')
	{
		if (s[i] == c)
			return ((char *)&(s[i]));
	}
	if (j == -1)
		return (0);
	return ((char *)&(s[j]));
}
