/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   :::::::    */
/*   ft_memmove.c                                       :+:    :+:   :+:      */
/*                                                      +:+    +:+   +:+      */
/*   By: Diogo-ss <diogo-ss@mail.com>                   +#+    +:+   +#+      */
/*                                                      +#+    +#+   +#+      */
/*   Created: 2022/11/28 19:08:45 by Diogo-ss           #+#    #+#   #+#      */
/*   Updated: 2022/11/28 19:08:46 by Diogo-ss           ########   #######    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memmove(char *dest, char *src, size_t len)
{
	unsigned int	count;

	count = 0;
	if (dest < src)
	{
		while (count < len)
		{
			dest[count] = src[count];
			count++;
		}
		return (dest);
	}
	while (len--)
	{
		dest[len] = src[len];
	}
	return (dest);
}
