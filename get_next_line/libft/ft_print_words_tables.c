/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_words_tables.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 11:23:50 by hwolff            #+#    #+#             */
/*   Updated: 2018/04/08 15:58:47 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_print_words_tables(char **tab)
{
	int i;
	int	index;

	index = 0;
	while (tab[index])
	{
		i = 0;
		while (tab[index][i])
		{
			ft_putchar(tab[index][i]);
			i++;
		}
		index++;
		ft_putchar('\n');
	}
}
