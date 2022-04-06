/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <sjuanena@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 19:31:12 by sjuanena          #+#    #+#             */
/*   Updated: 2021/06/22 18:59:02 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlenght(int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static	int	ft_newLenght(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len = ft_numlenght(n);
	else
		len = ft_numlenght(n) - 1;
	return (len);
}

static char	*ft_mymalloc(int len, int n)
{
	char	*src;
	int		aux;

	aux = 0;
	if (n < 0)
		aux = 1;
	src = (char *)malloc(len + 1 + aux);
	if (!src)
		return (NULL);
	if (aux == 1)
	{
		src[0] = '-';
		src[len + 1] = '\0';
	}
	else
		src[len] = '\0';
	return (src);
}

static int	ft_numAbsolut(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}

char	*ft_itoa(int n)
{
	char	*src;
	int		newLenght;

	newLenght = ft_newLenght(n);
	if (n == 0)
	{
		src = (char *)malloc(2);
		if (!src)
			return (NULL);
		src[0] = '0';
		src[1] = '\0';
	}
	if (n != 0)
	{
		src = ft_mymalloc(ft_numlenght(n), n);
		if (!src)
			return (NULL);
		while (n != 0)
		{
			src[newLenght] = (ft_numAbsolut(n % 10) + 48);
			n = n / 10;
			newLenght--;
		}
	}
	return (src);
}
