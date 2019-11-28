/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaboc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 10:44:20 by mdaboc            #+#    #+#             */
/*   Updated: 2017/12/22 10:44:24 by mdaboc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ss;
	char	*ss_cpy;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	ss = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (ss == NULL)
		return (NULL);
	ss_cpy = ss;
	while (*s1)
		*ss++ = *s1++;
	while (*s2)
		*ss++ = *s2++;
	*ss = '\0';
	return (ss_cpy);
}
