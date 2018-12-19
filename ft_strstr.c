/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehaggon <ehaggon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/24 15:22:27 by ehaggon           #+#    #+#             */
/*   Updated: 2018/12/13 15:27:59 by ehaggon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*str;
	int		a;
	int		b;

	str = (char *)haystack;
	if (needle[0] == '\0')
		return (str);
	a = 0;
	while (str[a] != '\0')
	{
		b = 0;
		while (needle[b] != '\0')
		{
			if (str[a + b] != needle[b])
				break ;
			b++;
		}
		if (needle[b] == '\0')
			return (str + a);
		a++;
	}
	return (NULL);
}
