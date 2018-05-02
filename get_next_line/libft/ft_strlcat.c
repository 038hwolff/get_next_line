/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 17:31:54 by hwolff            #+#    #+#             */
/*   Updated: 2018/04/08 17:32:12 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t size)
{
	char	*pdst;
	size_t	dest_size;
	size_t	src_size;

	pdst = dest;
	src_size = ft_strlen(src);
	dest_size = ft_strlen(dest);
	if (dest_size >= size)
		return (src_size + size);
	pdst += dest_size;
	while (*src && size-- > 1 + dest_size)
		*pdst++ = *src++;
	*pdst = '\0';
	return (src_size + dest_size);
}
