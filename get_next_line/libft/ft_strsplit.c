/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 19:15:33 by hwolff            #+#    #+#             */
/*   Updated: 2018/04/09 12:12:29 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(const char *str, char c)
{
	int		i;
	int		word;

	i = 0;
	word = 0;
	while (str[i])
	{
		while (str[i] && str[i] == c)
			i++;
		if (!(str[i]))
			return (word);
		while (str[i] && str[i] != c)
			i++;
		word++;
	}
	return (word);
}

static char		*put_words(const char *str, int index, char c)
{
	int		i;
	int		word;
	int		car;
	char	*ret;

	i = 0;
	word = 0;
	while (word <= index)
	{
		car = 0;
		while (str[i] && str[i] == c)
			i++;
		while (str[i] && str[i] != c)
		{
			i++;
			car++;
		}
		word++;
	}
	if (!(ret = (char *)malloc(sizeof(char) * (car + 1))))
		return (0);
	ret[car] = '\0';
	while (car)
		ret[car-- - 1] = str[i-- - 1];
	return (ret);
}

char			**ft_strsplit(char const *str, char c)
{
	int		nb_words;
	char	**tab;
	int		i;
	int		index;

	if (!str)
		return (NULL);
	nb_words = count_words(str, c);
	i = 0;
	index = 0;
	if (!(tab = (char **)malloc(sizeof(char *) * (nb_words + 1))))
		return (0);
	tab[nb_words] = 0;
	while (i < nb_words)
	{
		tab[i] = put_words(str, i, c);
		i++;
	}
	return (tab);
}
