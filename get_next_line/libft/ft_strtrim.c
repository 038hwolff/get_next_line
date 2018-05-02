/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 14:55:52 by hwolff            #+#    #+#             */
/*   Updated: 2018/04/09 16:48:06 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		blank(char const s)
{
	if (s == ' ' || s == '\n' || s == '\t')
		return (1);
	return (0);
}

char			*ft_strtrim(char const *s)
{
	unsigned int	end;
	unsigned int	start;

	if (!s)
		return (NULL);
	if (!*s)
		return ((char *)s);
	start = 0;
	end = (unsigned int)ft_strlen(s) - 1;
	while (blank(s[start]))
		start++;
	while (blank(s[end]) && end > start)
		end--;
	return (ft_strsub(s, start, end - start + 1));
}
