/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdaboc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 12:18:28 by mdaboc            #+#    #+#             */
/*   Updated: 2017/12/22 12:18:30 by mdaboc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isvalid(char *str)
{
	int		len;
	int		sign;

	len = 0;
	sign = 1;
	if ((*str == '-' || *str == '+') &&
			!(*(str + 1) >= '0' && *(str + 1) <= '9'))
		return (0);
	if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	if (*str == '+')
		str++;
	while (str[len] != '\0' && (str[len] >= '0' && str[len] <= '9'))
	{
		len++;
	}
	if ((len >= 19 && sign > 0) && (str[len - 1] > '7' || str[len - 2] > '0'))
		return (-1);
	if ((len >= 19 && sign < 0) && (str[len - 1] > '8' || str[len - 2] > '0'))
		return (0);
	return (1);
}

int			ft_atoi(const char *str)
{
	int		sign;
	int		result;
	int		isvalid;

	sign = 1;
	while ((*str > 8 && *str < 14) || *str == 32)
		str++;
	isvalid = ft_isvalid((char *)str);
	if (isvalid != 1)
		return (isvalid);
	if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	if (*str == '+')
		str++;
	result = 0;
	while (*str != '\0' && *str >= '0' && *str <= '9')
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	return (sign * result);
}
