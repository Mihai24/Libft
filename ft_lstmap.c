/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaboc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 10:40:21 by mdaboc            #+#    #+#             */
/*   Updated: 2017/12/22 10:40:25 by mdaboc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*a;
	t_list	*b;

	if (lst == NULL)
		return (NULL);
	b = f(lst);
	a = b;
	if (a == NULL)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
		b->next = f(lst);
		if (b->next == NULL)
			return (NULL);
		b = b->next;
	}
	return (a);
}
