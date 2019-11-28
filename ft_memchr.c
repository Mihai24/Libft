/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaboc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 10:40:57 by mdaboc            #+#    #+#             */
/*   Updated: 2017/12/22 10:41:01 by mdaboc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char*)s;
	while ((n > 0) && (*str != (unsigned char)c))
	{
		n--;
		str++;
	}
	if (n == 0)
		return (NULL);
	else
		return (str);
}
