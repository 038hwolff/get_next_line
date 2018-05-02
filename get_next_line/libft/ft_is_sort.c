/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 18:18:35 by hwolff            #+#    #+#             */
/*   Updated: 2018/04/12 10:37:01 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;
	int n;
	int	is_asc;
	int	is_desc;

	is_asc = 1;
	is_desc = 1;
	i = 0;
	n = 0;
	while (i < length)
	{
		while (n < i)
		{
			if (f(tab[n], tab[i]) > 0)
				is_desc = 0;
			else if (f(tab[n], tab[i]) < 0)
				is_asc = 0;
			n++;
		}
		i++;
		n = 0;
	}
	return (is_asc || is_desc);
}
