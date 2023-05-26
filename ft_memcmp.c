/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::   :::::::   */
/*   ft_memcmp.c                                         :+:    :+:   :+:     */
/*                                                       +:+    +:+   +:+     */
/*   By: Diogo-ss <contact@diogosilva.dev>               +#+    +:+   +#+     */
/*                                                       +#+    +#+   +#+     */
/*   Created: 2023/05/26 07:47:14 by Diogo-ss            #+#    #+#   #+#     */
/*   Updated: 2023/05/26 07:47:15 by Diogo-ss            ########   #######   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t len)
{
	unsigned char	*l_str2;
	unsigned char	*l_str1;

	l_str1 = (unsigned char *)str1;
	l_str2 = (unsigned char *)str2;
	if (!(str1 || str2))
		return (0);
	while (len--)
	{
		if (*l_str1 != *l_str2)
			return (*l_str1 - *l_str2);
		l_str2++;
		l_str1++;
	}
	return (0);
}
