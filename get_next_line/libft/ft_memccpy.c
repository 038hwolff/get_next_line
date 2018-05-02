/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 10:38:47 by hwolff            #+#    #+#             */
/*   Updated: 2018/04/08 18:46:39 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char *pdst;
	unsigned char *psrc;

	pdst = (unsigned char *)dst;
	psrc = (unsigned char *)src;
	while (n--)
	{
		*pdst++ = *psrc++;
		if (*(pdst - 1) == (unsigned char)c)
			return ((void *)pdst);
	}
	return (NULL);
}
