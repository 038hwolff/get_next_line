/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 14:00:05 by hwolff            #+#    #+#             */
/*   Updated: 2018/04/09 14:21:49 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*str;
	unsigned int	i;
	size_t			size;

	i = 0;
	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (!(str = (char *)malloc(sizeof(*str) * (size + 1))))
		return (NULL);
	str[size] = '\0';
	while (s[i])
	{
		str[i] = f(s[i]);
		i++;
	}
	return (str);
}
