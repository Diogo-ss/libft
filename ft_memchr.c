/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   :::::::    */
/*   ft_memchr.c                                        :+:    :+:   :+:      */
/*                                                      +:+    +:+   +:+      */
/*   By: Diogo-ss <diogo-ss@mail.com>                   +#+    +:+   +#+      */
/*                                                      +#+    +#+   +#+      */
/*   Created: 2022/11/28 19:08:23 by Diogo-ss           #+#    #+#   #+#      */
/*   Updated: 2022/11/28 19:08:24 by Diogo-ss           ########   #######    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*src;
	char	val;

	src = (char *) s;
	val = (char) c;
	while (n--)
	{
		if (*src == val)
			return ((void *) src);
		src++;
	}
	return (NULL);
}
