/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehaggon <ehaggon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 16:05:58 by ehaggon           #+#    #+#             */
/*   Updated: 2018/12/13 19:16:08 by ehaggon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stddef.h>

char	*ft_strchr(const char *s, int c)
{
	char c2;

	c2 = (char)c;
	while (*s != c2)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}
