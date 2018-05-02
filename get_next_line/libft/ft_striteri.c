/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 13:54:33 by hwolff            #+#    #+#             */
/*   Updated: 2018/04/09 14:18:42 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int i;
	unsigned int index;

	i = 0;
	index = 0;
	if (s && f)
	{
		while (s && s[i])
		{
			f(index, &s[i]);
			i++;
			index++;
		}
	}
}
