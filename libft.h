/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvasylie <hvasylie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 13:59:45 by hvasylie          #+#    #+#             */
/*   Updated: 2019/05/04 23:19:46 by hvasylie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <ctype.h>

int		ft_atoi(char *str);
void	t_bzero(void *s, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memalloc(size_t size);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	ft_memdel(void **ap);
void	*ft_memset(void *b, int c, size_t len);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putstr(char const *s);
void	ft_putstr_fd(char const *s, int fd);
void	ft_strclr(char *s);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dst, const char *src);
void	ft_strdel(char **as);
char	*ft_strdup(const char *s1);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
int		ft_strlen(char *str);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char(*f)(unsigned int, char));
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnew(size_t size);
int		ft_tolower_l(int c, locale_t loc);
int		ft_toupper(int c, locale_t loc);

#endif
