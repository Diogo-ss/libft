/* ************************************************************************** */
/*                                                                            */
/*                                               ::::::::   :::::::           */
/*   ft_memset.c                                 :+:    :+:   :+:             */
/*                                               +:+    +:+   +:+             */
/*   By: Diogo-ss <diogo-ss@mail.com>            +#+    +:+   +#+             */
/*                                               +#+    +#+   +#+             */
/*   Created: 2022/06/29 18:00:11 by Diogo-ss    #+#    #+#   #+#             */
/*   Updated: 2022/06/29 18:36:17 by Diogo-ss    ########   #######           */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/* Headers ****************************************************************** */

# include <unistd.h>
# include <stdlib.h>

/* Library Prototype ******************************************************** */

void	*ft_memset(void *dest, int val, size_t len);
void	ft_bzero(char *string, unsigned int size);
void	*ft_memcpy(char *strc, char *str, unsigned int size);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
char	*ft_memmove(char *dest, char *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *str1, const void *str2, size_t len);
size_t	ft_strlen(const char *str);
// int	ft_strlen(const char *str);
#endif
