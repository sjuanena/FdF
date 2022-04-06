/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <sjuanena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 0001/06/07 19:47:24 by sjuanena          #+#    #+#             */
/*   Updated: 2021/06/22 18:36:51 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t	count, size_t	size)
{
	void	*str;

	str = (void *)malloc(count * size);
	if (str == NULL)
		return (0);
	ft_memset(str, 0, (count * size));
	return (str);
}
