/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjuanena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:09:24 by sjuanena          #+#    #+#             */
/*   Updated: 2022/03/31 19:31:27 by sjuanena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free_memo(char	*memo, int i)
{
	if (i == -1)
		free(memo);
}

static char	*ft_new_line(char	*read_line)
{
	char	*nline;
	size_t	i;
	size_t	j;

	i = 0;
	while (read_line[i] != '\n' && read_line[i] != '\0')
		i++;
	if (!read_line[i])
	{
		free(read_line);
		return (NULL);
	}
	j = ft_strlen(read_line) - i;
	nline = malloc((sizeof(char)) * (j + 1));
	if (!nline)
		return (NULL);
	j = 0;
	i++;
	while (read_line[i])
		nline[j++] = read_line[i++];
	nline[j] = '\0';
	free(read_line);
	return (nline);
}

static char	*ft_treat_line(char *read_line)
{
	char	*line;
	size_t	i;

	i = 0;
	if (!read_line[i])
		return (NULL);
	while ((read_line[i] != '\0') && (read_line[i] != '\n'))
		i++;
	line = malloc(sizeof(char) * (i + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (read_line[i] != '\n' && read_line[i])
	{
		line[i] = read_line[i];
		i++;
	}
	if (read_line[i] == '\n')
	{
		line[i] = read_line[i];
		i++;
	}
	line[i] = '\0';
	return (line);
}

char	*get_next_line(int fd)
{
	int			nbytes;
	char		*buffer;
	static char	*read_line;
	char		*line;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	nbytes = 1;
	buffer = malloc((BUFFER_SIZE + 1) * (sizeof(char)));
	if (!buffer)
		return (NULL);
	while (nbytes > 0 && (!ft_strchr(read_line, '\n')))
	{
		nbytes = read(fd, buffer, BUFFER_SIZE);
		ft_free_memo(buffer, nbytes);
		if (nbytes == -1)
			return (NULL);
		buffer[nbytes] = '\0';
		read_line = ft_strjoin(read_line, buffer);
	}
	free(buffer);
	line = ft_treat_line(read_line);
	read_line = ft_new_line(read_line);
	return (line);
}
