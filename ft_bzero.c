/* ************************************************************************** */
/*                                                                            */
/*                                                      ::::::::   :::::::    */
/*   ft_bzero.c                                         :+:    :+:   :+:      */
/*                                                      +:+    +:+   +:+      */
/*   By: Diogo-ss <diogo-ss@mail.com>                   +#+    +:+   +#+      */
/*                                                      +#+    +#+   +#+      */
/*   Created: 2022/11/28 19:08:06 by Diogo-ss           #+#    #+#   #+#      */
/*   Updated: 2022/11/28 19:08:09 by Diogo-ss           ########   #######    */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(char *string, unsigned int size)
{
	unsigned int	count;

	count = 0;
	while (count < size)
	{
		string[count] = '\0';
		count++;
	}
}
