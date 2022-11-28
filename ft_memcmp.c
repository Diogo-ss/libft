/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   :::::::    */
/*   ft_memcmp.c                                        :+:    :+:   :+:      */
/*                                                      +:+    +:+   +:+      */
/*   By: Diogo-ss <diogo-ss@mail.com>                   +#+    +:+   +#+      */
/*                                                      +#+    +#+   +#+      */
/*   Created: 2022/11/28 19:08:32 by Diogo-ss           #+#    #+#   #+#      */
/*   Updated: 2022/11/28 19:08:33 by Diogo-ss           ########   #######    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t len)
{
	unsigned char	*l_str2;
	unsigned char	*l_str1;

	l_str1 = (unsigned char *) str1;
	l_str2 = (unsigned char *) str2;
	if (!(str1 || str2))
		return (0);
	while (len--)
	{
		if (*l_str1 != *l_str2)
			return (*l_str1 - *l_str2);
		l_str2++;
		l_str1++;
	}
	return (0);
}
