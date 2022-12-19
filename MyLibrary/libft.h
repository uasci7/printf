/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uasci <uasci@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:41:39 by uasci             #+#    #+#             */
/*   Updated: 2022/10/20 14:16:56 by uasci            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include	<unistd.h>
# include	<stdlib.h>
# include	<stdio.h>
# include <string.h>

int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isgraph(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_memcmp(const void *ptr1, const void *ptr2, size_t n);
int		ft_strncmp(const char *str, const char *str1, size_t c);
int		ft_atoi(const char *str);
char	*ft_strchr(const char *str, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strnstr(const char *str, const char *str1, size_t len);
void	*ft_memset(void *b, int c, size_t len);
char	*ft_substr(char const *s, unsigned int start, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memchr(const void *ptr, int c, size_t d);
void	ft_bzero(void *s, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlcpy(char *dest, const char *src, size_t dsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dsize);
size_t	ft_strlen(const char *str);

#endif