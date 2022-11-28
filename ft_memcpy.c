/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   :::::::    */
/*   ft_memcpy.c                                        :+:    :+:   :+:      */
/*                                                      +:+    +:+   +:+      */
/*   By: Diogo-ss <diogo-ss@mail.com>                   +#+    +:+   +#+      */
/*                                                      +#+    +#+   +#+      */
/*   Created: 2022/11/28 19:08:38 by Diogo-ss           #+#    #+#   #+#      */
/*   Updated: 2022/11/28 19:08:39 by Diogo-ss           ########   #######    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(char *strc, char *str, unsigned int size)
{
	unsigned int	count;

	count = 0;
	while (count < size)
	{
		strc[count] = str[count];
		count++;
	}
	return (strc);
}
