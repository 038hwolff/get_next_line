/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 14:07:26 by hwolff            #+#    #+#             */
/*   Updated: 2018/04/09 12:13:10 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	index;
	unsigned int	i;
	size_t			size;
	char			*str;

	if (!s)
		return (NULL);
	size = ft_strlen(s);
	if (!(str = (char *)malloc(sizeof(*str) * (size + 1))))
		return (NULL);
	str[size] = '\0';
	index = 0;
	i = 0;
	while (s[i])
	{
		str[i] = f(index++, s[i]);
		i++;
	}
	return (str);
}
