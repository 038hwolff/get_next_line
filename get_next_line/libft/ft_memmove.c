/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/05 12:21:46 by hwolff            #+#    #+#             */
/*   Updated: 2018/04/12 15:38:32 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (len == 0 || dst == src)
		return (dst);
	if (src > dst)
		ft_memcpy(dst, src, len);
	else
		ft_memrcpy(dst, src, len);
	return ((unsigned char *)dst);
}
