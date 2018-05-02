/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 18:54:22 by hwolff            #+#    #+#             */
/*   Updated: 2018/04/12 15:40:36 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memrcpy(void *dst, const void *src, size_t n)
{
	while (n)
	{
		n--;
		((unsigned char *)dst)[n] = ((unsigned char *)src)[n];
	}
	return (dst);
}
