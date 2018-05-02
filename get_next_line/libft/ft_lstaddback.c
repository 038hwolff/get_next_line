/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddback.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 10:32:56 by hwolff            #+#    #+#             */
/*   Updated: 2018/04/12 10:34:42 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstaddback(t_list **alst, t_list *new)
{
	t_list	*current;

	if (alst && *alst)
	{
		current = *alst;
		while (current->next)
			current = current->next;
		current->next = new;
	}
	else if (alst)
		*alst = new;
}
