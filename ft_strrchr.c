/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehaggon <ehaggon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 17:50:22 by ehaggon           #+#    #+#             */
/*   Updated: 2018/12/14 12:25:01 by ehaggon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "libft.h"

char	*ft_strrchr(const char *str, int character)
{
	int		len;

	len = ft_strlen((char *)str);
	while (0 != len && str[len] != (char)character)
		len--;
	if (str[len] == (char)character)
		return ((char *)&str[len]);
	return (NULL);
}
