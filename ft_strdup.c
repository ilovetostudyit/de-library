/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehaggon <ehaggon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 18:42:06 by ehaggon           #+#    #+#             */
/*   Updated: 2018/12/13 14:25:40 by ehaggon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "libft.h"

char			*ft_strdup(const char *src)
{
	size_t		a;
	size_t		b;
	char		*str;

	b = ft_strlen(src);
	str = (char*)malloc(sizeof(*str) * (b + 1));
	if (str == NULL)
		return (NULL);
	a = 0;
	while (a < b)
	{
		str[a] = src[a];
		a++;
	}
	str[a] = '\0';
	return (str);
}
