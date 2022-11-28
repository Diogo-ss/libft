/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   :::::::    */
/*   ft_strlen.c                                        :+:    :+:   :+:      */
/*                                                      +:+    +:+   +:+      */
/*   By: Diogo-ss <diogo-ss@mail.com>                   +#+    +:+   +#+      */
/*                                                      +#+    +#+   +#+      */
/*   Created: 2022/11/28 19:09:01 by Diogo-ss           #+#    #+#   #+#      */
/*   Updated: 2022/11/28 19:09:02 by Diogo-ss           ########   #######    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	char	*l_str;
	size_t	count;

	l_str = (char *)str;
	count = 0;
	while (l_str[count])
	{
		count++;
	}	
	return (count);
}
