/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaboc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 10:46:05 by mdaboc            #+#    #+#             */
/*   Updated: 2017/12/22 10:46:08 by mdaboc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	if ((s1 != NULL) && (s2 != NULL))
		return (ft_strncmp(s1, s2, n) == 0 ? 1 : 0);
	return (0);
}