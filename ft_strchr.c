/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaboc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 10:42:50 by mdaboc            #+#    #+#             */
/*   Updated: 2017/12/22 10:42:52 by mdaboc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *str, int c)
{
	size_t	i;
	char	*n;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			n = &str[i];
			return (n);
		}
		i++;
	}
	if (str[i] == c)
		return (&str[i]);
	return (NULL);
}
