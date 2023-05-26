/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::   :::::::   */
/*   ft_memchr.c                                         :+:    :+:   :+:     */
/*                                                       +:+    +:+   +:+     */
/*   By: Diogo-ss <contact@diogosilva.dev>               +#+    +:+   +#+     */
/*                                                       +#+    +#+   +#+     */
/*   Created: 2023/05/26 07:47:01 by Diogo-ss            #+#    #+#   #+#     */
/*   Updated: 2023/05/26 07:47:03 by Diogo-ss            ########   #######   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*src;
	char	val;

	src = (char *)s;
	val = (char)c;
	while (n--)
	{
		if (*src == val)
			return ((void *)src);
		src++;
	}
	return (NULL);
}
