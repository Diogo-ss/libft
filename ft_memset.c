/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::   :::::::   */
/*   ft_memset.c                                         :+:    :+:   :+:     */
/*                                                       +:+    +:+   +:+     */
/*   By: Diogo-ss <contact@diogosilva.dev>               +#+    +:+   +#+     */
/*                                                       +#+    +#+   +#+     */
/*   Created: 2023/05/26 07:47:39 by Diogo-ss            #+#    #+#   #+#     */
/*   Updated: 2023/05/26 07:47:40 by Diogo-ss            ########   #######   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int val, size_t len)
{
	unsigned char		l_val;
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
