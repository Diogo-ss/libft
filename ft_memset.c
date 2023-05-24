/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   :::::::    */
/*   ft_memset.c                                        :+:    :+:   :+:      */
/*                                                      +:+    +:+   +:+      */
/*   By: Diogo-ss <diogo-ss@mail.com>                   +#+    +:+   +#+      */
/*                                                      +#+    +#+   +#+      */
/*   Created: 2022/11/28 19:08:55 by Diogo-ss           #+#    #+#   #+#      */
/*   Updated: 2022/11/28 19:08:56 by Diogo-ss           ########   #######    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int val, size_t len)
{
	unsigned char	l_val;
	char			*l_dest;

	l_val = (unsigned char)val;
	l_dest = (char *)dest;
	while (len--)
	{
		*l_dest = l_val;
		l_dest++;
	}
	return (dest);
}
