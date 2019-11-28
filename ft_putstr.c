/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaboc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 10:42:21 by mdaboc            #+#    #+#             */
/*   Updated: 2017/12/22 10:42:24 by mdaboc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(char const *s)
{
	size_t	i;

	if (s != NULL)
	{
		i = 0;
		while (i < ft_strlen(s))
		{
			ft_putchar(s[i]);
			i++;
		}
	}
}
