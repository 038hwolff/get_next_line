/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 15:05:13 by hwolff            #+#    #+#             */
/*   Updated: 2018/05/02 19:26:40 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_is_false(int fd, char **str, char **line)
{
	char buff[BUFF_SIZE + 1];

	if (read(fd, buff, 0) < 0)
		return (-1);
	if (fd == -1 || line == NULL)
		return (-1);
	if (!*str)
	{
		if (!(*str = (char*)malloc(sizeof(char) * (BUFF_SIZE + 1))))
			return (-1);
	}
	return (0);
}

char	*ft_read_line(char *str, int fd)
{
	char	buff[BUFF_SIZE + 1];
	int		ret;

	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		if (!(str = ft_strjoin(str, buff)))
			return (NULL);
	}
	return (str);
}

int		get_next_line(const int fd, char **line)
{
	static char	*str;
	int			i;

	if (ft_is_false(fd, &str, line) == -1)
		return (-1);
	if (*str)
		ft_strcpy(*line, str);
	str = ft_read_line(str, fd);
	i = 0;
	if (str[i])
	{
		while (str[i] != '\n' && str[i])
			i++;
		if (i == 0)
			(*line) = ft_strdup("");
		else
		{
			*line = ft_strsub(str, 0, i);
			str = &str[i + 1];
		}
		return (1);
	}
	else
		(*line) = ft_strdup("");
	return (0);
}
