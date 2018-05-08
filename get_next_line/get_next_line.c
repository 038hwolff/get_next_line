/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 15:05:13 by hwolff            #+#    #+#             */
/*   Updated: 2018/05/07 15:15:28 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		is_false(int fd, char **l)
{
	char b[BUFF_SIZE + 1];

	if ((fd < 0 || read(fd, b, 0) < 0 || BUFF_SIZE <= 0 || l == NULL))
		return (-1);
	else
		return (0);
}

char	*read_file(char *str, int fd)
{
	char	buff[BUFF_SIZE + 1];
	int		ret;
	char	*tmp;

	while ((ret = read(fd, buff, BUFF_SIZE)) > 0)
	{
		buff[ret] = '\0';
		tmp = str;
		str = ft_strjoin(str, buff);
		if (!str)
			return (NULL);
		if (tmp)
			ft_strdel(&tmp);
		if (ft_strchr(buff, '\n'))
			return (str);
	}
	return (str);
}

int		end_of_line(char *str)
{
	int i;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	return (i);
}

int		get_next_line(const int fd, char **line)
{
	static char	*str = 0;
	int			i;
	char		*tmp;

	if (!str)
		str = ft_strdup("");
	if (is_false(fd, line) == -1)
		return (-1);
	if (((str = read_file(str, fd)) == NULL) || !*str)
		return (0);
	i = end_of_line(str);
	if (str[i] == '\0')
	{
		*line = str;
		str = NULL;
	}
	else
	{
		*line = ft_strsub(str, 0, i);
		tmp = ft_strsub(str, i + 1, ft_strlen(str + i + 1));
		ft_strdel(&str);
		str = tmp;
	}
	return (1);
}
