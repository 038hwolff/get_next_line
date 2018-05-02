/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 15:29:22 by hwolff            #+#    #+#             */
/*   Updated: 2018/04/08 18:46:11 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	long int	nb;
	char		*number;
	int			size;
	int			sign;

	nb = n;
	sign = n >= 0 ? 1 : -1;
	size = sign >= 0 ? 1 : 2;
	while (nb /= 10)
		size++;
	nb = sign > 0 ? n : -(long int)n;
	if (!(number = (char *)malloc(sizeof(*number) * (size + 1))))
		return (0);
	number[size] = '\0';
	while (size)
	{
		number[--size] = nb % 10 + '0';
		nb /= 10;
	}
	number[0] = sign > 0 ? number[0] : '-';
	return (number);
}
