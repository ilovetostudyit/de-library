/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehaggon <ehaggon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 12:35:49 by ehaggon           #+#    #+#             */
/*   Updated: 2018/12/13 14:32:43 by ehaggon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t num)
{
	size_t a;
	size_t b;

	a = 0;
	b = 0;
	a = ft_strlen(dst);
	while (b < num && src[b])
	{
		dst[a] = src[b];
		a++;
		b++;
	}
	dst[a] = '\0';
	return (dst);
}
