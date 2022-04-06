/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <sjuanena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 19:32:42 by sjuanena          #+#    #+#             */
/*   Updated: 2021/06/22 19:00:20 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char	*s, int	fd)
{
	size_t	i;
	size_t	j;

	if (!s)
		return ;
	j = 0;
	i = ft_strlen(s);
	while (j < i)
	{
		write(fd, &s[j], 1);
		j++;
	}
}
