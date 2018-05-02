/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 12:17:03 by hwolff            #+#    #+#             */
/*   Updated: 2018/04/08 17:05:41 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *t_dest;
	unsigned char *t_src;

	t_dest = (unsigned char *)dst;
	t_src = (unsigned char *)src;
	while (n--)
		*t_dest++ = *t_src++;
	return (dst);
}
