/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::   :::::::   */
/*   ft_memccpy.c                                        :+:    :+:   :+:     */
/*                                                       +:+    +:+   +:+     */
/*   By: Diogo-ss <contact@diogosilva.dev>               +#+    +:+   +#+     */
/*                                                       +#+    +#+   +#+     */
/*   Created: 2023/05/26 07:46:50 by Diogo-ss            #+#    #+#   #+#     */
/*   Updated: 2023/05/26 07:46:51 by Diogo-ss            ########   #######   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	val;
	char	*dest_l;
	char	*src_l;

	val = (char)c;
	dest_l = (char *)dest;
	src_l = (char *)src;
	if (!(dest || src))
		return (NULL);
	i = 0;
	while (i < n)
	{
		*dest_l = *src_l;
		if (*dest_l == val)
		{
			dest_l++;
			return ((void *)dest);
		}
		dest_l++;
		src_l++;
		i++;
	}
	return (NULL);
}
