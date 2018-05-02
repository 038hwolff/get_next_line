/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 17:30:15 by hwolff            #+#    #+#             */
/*   Updated: 2018/04/08 17:30:19 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	int		i;
	char	*dup;

	dup = NULL;
	i = 0;
	while (s1[i])
		i++;
	if (!(dup = (char *)malloc(sizeof(*dup) * (i + 1))))
		return (NULL);
	if (dup)
	{
		i = 0;
		while (s1[i])
		{
			dup[i] = s1[i];
			i++;
		}
		dup[i] = '\0';
	}
	return (dup);
}
