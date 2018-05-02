/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hwolff <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/12 10:28:14 by hwolff            #+#    #+#             */
/*   Updated: 2018/04/12 10:32:10 by hwolff           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *start;

	new = NULL;
	start = new;
	while (lst)
	{
		if (!(new = f(ft_lstnew(lst->content, lst->content_size))))
			return (0);
		ft_lstaddback(&start, new);
		lst = lst->next;
	}
	return (start);
}
