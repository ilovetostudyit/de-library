/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehaggon <ehaggon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 15:33:48 by ehaggon           #+#    #+#             */
/*   Updated: 2018/12/13 14:12:36 by ehaggon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*su;
	size_t				a;

	su = (const unsigned char *)s;
	a = 0;
	while (a < n)
	{
		if (*(su + a) == (unsigned char)c)
			return ((void *)(su + a));
		a = a + 1;
	}
	return (NULL);
}
