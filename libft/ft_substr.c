/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <sjuanena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 11:26:40 by sjuanena          #+#    #+#             */
/*   Updated: 2021/06/22 19:01:13 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const	*s, unsigned int	start, size_t len)
{
	size_t	pos;
	char	*str;

	pos = 0;
	if (!s)
		return (0);
	if (start >= ft_strlen(s))
	{
		str = (char *)malloc(1);
		if (!str)
			return (0);
	}
	else
	{
		str = (char *)malloc(len + 1);
		if (!str)
			return (0);
	}
	while (s[start] != '\0' && pos < len && start < ft_strlen(s))
		str[pos++] = s[start++];
	str[pos] = '\0';
	return (str);
}
