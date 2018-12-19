/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehaggon <ehaggon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 18:48:02 by ehaggon           #+#    #+#             */
/*   Updated: 2018/12/14 19:16:19 by ehaggon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isspace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' ||
		c == '\v' || c == '\f' || c == '\r')
	{
		return (1);
	}
	return (0);
}

int				ft_atoi(const char *str)
{
	int			result;
	size_t		i;
	int			sign;

	result = 0;
	i = 0;
	sign = 1;
	while (ft_isspace(*str))
		str++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] && str[i] == '0')
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		if (i == 11 && sign == -1)
			return (0);
		if (i == 11 && sign == 1)
			return (-1);
		result = result * 10 + (int)(str[i] - '0');
		i++;
	}
	return (result * sign);
}
