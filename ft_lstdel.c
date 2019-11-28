/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaboc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 10:39:52 by mdaboc            #+#    #+#             */
/*   Updated: 2017/12/22 10:39:54 by mdaboc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*a;
	t_list		*b;

	if (alst == NULL)
		return ;
	b = *alst;
	while (b != NULL)
	{
		a = b->next;
		ft_lstdelone(&b, del);
		b = a;
	}
	*alst = NULL;
}
