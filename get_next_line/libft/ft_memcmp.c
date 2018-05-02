/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/06 10:11:41 by hwolff            #+#    #+#             */
/*   Updated: 2018/04/08 17:07:04 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ps1;
	unsigned char	*ps2;
	int				res;

	res = 0;
	if (s1 == s2)
		return (res);
	ps1 = (unsigned char *)s1;
	ps2 = (unsigned char *)s2;
	while (n-- && !res)
		res = *ps1++ - *ps2++;
	return (res);
}
