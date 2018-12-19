/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehaggon <ehaggon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 18:32:53 by ehaggon           #+#    #+#             */
/*   Updated: 2018/12/10 16:23:42 by ehaggon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "libft.h"

char	*ft_strcat(char *dst, const char *src)
{
	size_t			a;
	size_t			b;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char *)dst;
	s2 = (unsigned char *)src;
	b = 0;
	a = ft_strlen((char *)s1);
	while (s2[b] != '\0')
	{
		s1[a + b] = s2[b];
		b++;
	}
	s1[a + b] = '\0';
	return ((char *)s1);
}
