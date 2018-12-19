/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehaggon <ehaggon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/04 15:59:29 by ehaggon           #+#    #+#             */
/*   Updated: 2018/12/14 19:27:11 by ehaggon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdio.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

typedef	struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

char			*ft_strdup(const char *src);
char			*ft_strncpy(char *dst, const char *src, size_t num);
size_t			ft_strlen(const char *str);
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strcat (char *dst, const char *app);
char			*ft_strncat(char *dst, const char *src, size_t num);
size_t			ft_strlcat(char *dst, const char *src, size_t num);
char			*ft_strchr(const char *s, int character);
char			*ft_strrchr(const char *s, int character);
char			*ft_strstr(const char *haystack, const char *needle);
int				ft_strncmp(const char *str1, const char *str2, size_t num);
char			*ft_strnstr(const char *haystack, const char *need, size_t len);
int				ft_strcmp(const char *string1, const char *string2);
int				ft_isalpha(int ch);
int				ft_atoi(const char *str);
int				ft_isdigit(int ch);
int				ft_isalnum(int ch);
int				ft_tolower(int ch);
int				ft_isprint(int ch);
int				ft_isascii(int ch);
void			ft_bzero(void *prt, size_t num);
void			*ft_memset(void *ptr, int value, size_t num);
int				ft_toupper(int ch);
void			*ft_memcpy(void *dest, const void *src, size_t num);
void			*ft_memccpy(void *dest, const void *src, int ch, size_t count);
void			*ft_memmove(void *dst, const void *src, size_t num);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);

void			ft_putchar(char c);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr(char const *s);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putendl(char const *s);
void			ft_putendl_fd(char const *s, int fd);
char			*ft_itoa(int n);
void			ft_putnbr(int n);
void			ft_putnbr_fd(int n, int fd);
void			ft_strclr(char *s);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
void			ft_strdel(char **as);
void			ft_memdel(void **ap);
void			*ft_memalloc(size_t size);
char			*ft_strnew(size_t size);
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char(*f)(unsigned int, char));
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strtrim(char const *s);
char			*ft_strjoin(char const *s1, char const *s2);
char			**ft_strsplit(char const *s, char c);

t_list			*ft_lstnew(void const *content, size_t content_size);
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

#endif
