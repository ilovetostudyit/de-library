/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehaggon <ehaggon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 16:04:37 by ehaggon           #+#    #+#             */
/*   Updated: 2018/12/13 14:36:05 by ehaggon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t num)
{
	size_t		a;
	size_t		b;

	b = ft_strlen(src);
	a = 0;
	while (src[a] && a != num)
	{
		dst[a] = src[a];
		a++;
	}
	if (a < num)
	{
		while (a < num)
		{
			dst[a] = '\0';
			a++;
		}
	}
	return (dst);
}
