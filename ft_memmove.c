/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::   :::::::   */
/*   ft_memmove.c                                        :+:    :+:   :+:     */
/*                                                       +:+    +:+   +:+     */
/*   By: Diogo-ss <contact@diogosilva.dev>               +#+    +:+   +#+     */
/*                                                       +#+    +#+   +#+     */
/*   Created: 2023/05/26 07:47:32 by Diogo-ss            #+#    #+#   #+#     */
/*   Updated: 2023/05/26 07:47:33 by Diogo-ss            ########   #######   */
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
