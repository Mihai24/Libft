/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaboc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 10:40:48 by mdaboc            #+#    #+#             */
/*   Updated: 2017/12/22 10:40:50 by mdaboc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	size_t			i;
	unsigned char	str;

	i = 0;
	str = (unsigned char)c;
	while (i < n)
	{
		((char *)s1)[i] = ((char *)s2)[i];
		i++;
		if (((unsigned char *)s1)[i - 1] == str)
			return (&((unsigned char *)s1)[i]);
	}
	return (NULL);
}
