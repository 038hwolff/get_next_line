/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 17:32:26 by hwolff            #+#    #+#             */
/*   Updated: 2018/04/09 16:57:56 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	len;
	char	*ptr;

	len = ft_strlen(needle);
	ptr = (char *)haystack;
	while (*ptr)
	{
		if (ft_memcmp(ptr, needle, len) == 0)
			return (ptr);
		++ptr;
	}
	if (!*haystack && !*needle)
		return (ptr);
	return (NULL);
}
