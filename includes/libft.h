/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajones <ajones@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 10:56:31 by ajones            #+#    #+#             */
/*   Updated: 2023/02/17 14:11:46 by ajones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define BUFF_SIZE 1
# define FD_SIZE 4096

# include "../ft_printf/includes/ft_printf.h"
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct s_line
{
	int				num;
	char			*line;
	struct s_line	*next;
}					t_line;

int			ft_isdigit(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
int			ft_isalpha(int c);
int			ft_isprint(int c);
int			ft_isascii(int c);
int			ft_isalnum(int c);
int			ft_abs(int i);
int			ft_isspace(int c);
int			ft_intlen(int n);
int			ft_atoi(const char *str);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
int			ft_strequ(char const *s1, char const *s2);
int			ft_strnequ(char const *s1, char const *s2, size_t n);
void		ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void		ft_lstadd_toend(t_list **alst, t_list *lst);
void		ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void		ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void		ft_lstadd(t_list **alst, t_list *lst);
void		ft_bzero(void *s, size_t n);
void		ft_putchar(char c);
void		ft_putnbr(int n);
void		ft_putstr(char const *s);
void		ft_putendl(char const *s);
void		ft_strclr(char *s);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char const *s, int fd);
void		ft_putendl_fd(char const *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_memdel(void **ap);
void		ft_strdel(char **as);
void		ft_striter(char *s, void (*f)(char *));
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
void		*ft_memalloc(size_t size);
void		*ft_memset(void *b, int c, size_t len);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memchr(const void *s, int c, size_t n);
void		*ft_lstfree(t_list **lst);
void		*ft_2d_free(char **newstr);
size_t		ft_lstcount(t_list *lst);
size_t		ft_strlen(char const *s);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
char		*ft_strnew(size_t size);
char		*ft_strdup(const char *s1);
char		*ft_strcpy(char *dst, const char *src);
char		*ft_strncpy(char *dst, const char *src, size_t len);
char		*ft_strcat(char *s1, const char *s2);
char		*ft_strncat(char *s1, const char *s2, size_t n);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
char		*ft_strstr(const char *haystack, const char *needle);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
char		*ft_strmap(char const *s, char (*f)(char));
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_strsub(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strjoin_line(char *s1, char *s2);
char		*ft_strjoin_free1(char *s1, char *s2);
char		*ft_strjoin_free2(char *s1, char *s2);
char		*ft_strtrim(char const *s);
char		*ft_itoa(int n);
char		**ft_strsplit(char const *s, char c);
t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list		*ft_lstnew(void const *content, size_t content_size);
t_list		*ft_lstlast(t_list *lst);
int			get_next_line(const int fd, char **line);
int			ft_power(int base, int power);
int			ft_is_neg(double num);
long double	ft_power_double(long double base, int power);
long double	ft_round(long double num, int i);

#endif