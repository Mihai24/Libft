/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaboc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 10:44:32 by mdaboc            #+#    #+#             */
/*   Updated: 2017/12/22 10:44:35 by mdaboc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = 0;
	while ((dest[i]) && (i < n))
		i++;
	while ((src[j]) && ((i + j + 1) < n))
	{
		dest[i + j] = src[j];
		j++;
	}
	if (i < n)
		dest[i + j] = 0;
	return (i + ft_strlen(src));
}
