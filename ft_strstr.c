/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaboc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 10:46:51 by mdaboc            #+#    #+#             */
/*   Updated: 2017/12/22 10:46:54 by mdaboc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str1, const char *str2)
{
	char	*s1;
	char	*s2;

	if (!*str2)
		return ((void *)str1);
	while (*str1)
	{
		if (*str1 == *str2)
		{
			s1 = (void *)str1 + 1;
			s2 = (void *)str2 + 1;
			while ((*s1) && (*s2) && (*s1 == *s2))
			{
				++s1;
				++s2;
			}
			if (!*s2)
				return ((void *)str1);
		}
		str1++;
	}
	return (NULL);
}
