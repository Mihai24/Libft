/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaboc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 10:46:29 by mdaboc            #+#    #+#             */
/*   Updated: 2017/12/22 10:46:30 by mdaboc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t slen)
{
	size_t	i;
	size_t	j;

	if (*find == '\0')
		return ((char *)s);
	i = 0;
	while ((s[i]) && (i < slen))
	{
		j = 0;
		while ((s[i + j]) && (i + j < slen) && (find[j])
				&& (s[i + j] == find[j]))
			j++;
		if (find[j] == '\0')
			return ((char *)(s + i));
		i++;
	}
	return (NULL);
}
