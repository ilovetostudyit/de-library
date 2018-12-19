/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehaggon <ehaggon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 19:28:38 by ehaggon           #+#    #+#             */
/*   Updated: 2018/12/13 14:35:41 by ehaggon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strncmp(const char *str1, const char *str2, size_t num)
{
	size_t			a;
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char*)str1;
	s2 = (unsigned char*)str2;
	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0' && s1[a] == s2[a] && a < num)
		a++;
	if (a == num)
		return (0);
	return (s1[a] - s2[a]);
}
