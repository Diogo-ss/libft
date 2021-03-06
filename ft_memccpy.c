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

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	val;
	char	*dest_l;
	char	*src_l;

	val = (char) c;
	dest_l = (char *) dest;
	src_l = (char *) src;
	if (!(dest || src))
		return (NULL);
	i = 0;
	while (i < n)
	{
		*dest_l = *src_l;
		if (*dest_l == val)
		{
			return ((void *)dest);
		}
		dest_l++;
		src_l++;
		i++;
	}
	return (NULL);
}
