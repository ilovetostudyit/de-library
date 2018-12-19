/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehaggon <ehaggon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 15:53:43 by ehaggon           #+#    #+#             */
/*   Updated: 2018/12/13 18:40:01 by ehaggon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void			*ft_memseta(void *ptr, int value, size_t num)
{
	size_t	a;

	a = 0;
	while (a < num)
	{
		((char*)ptr)[a] = (unsigned char)value;
		a++;
	}
	return (ptr);
}

static void			*ft_memalloca(size_t size)
{
	char	*s1;

	s1 = malloc(size);
	if (s1 == NULL)
		return (NULL);
	ft_memseta(s1, 0, size);
	return (s1);
}

static char			*ft_strnewa(size_t size)
{
	char	*str;
	size_t	counter;

	counter = size;
	str = ft_memalloca(size + 1);
	if (str == NULL)
		return (NULL);
	return (str);
}

static size_t		ft_strlena(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	a;
	char			*new;

	if (s == NULL || f == NULL)
		return (NULL);
	if ((new = ft_strnewa(ft_strlena(s))) == NULL)
		return (NULL);
	a = 0;
	while (s[a])
	{
		new[a] = f(a, s[a]);
		a++;
	}
	return (new);
}
