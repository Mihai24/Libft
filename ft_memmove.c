/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaboc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 10:41:38 by mdaboc            #+#    #+#             */
/*   Updated: 2017/12/22 10:41:42 by mdaboc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*sdst;
	char	*ssrc;

	ssrc = (char*)src;
	sdst = (char*)dst;
	if (ssrc < sdst)
	{
		ssrc = ssrc + n - 1;
		sdst = sdst + n - 1;
		while (n > 0)
		{
			*sdst-- = *ssrc--;
			n--;
		}
	}
	else
		while (n > 0)
		{
			*sdst++ = *ssrc++;
			n--;
		}
	return (dst);
}
