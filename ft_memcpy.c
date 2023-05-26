/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::   :::::::   */
/*   ft_memcpy.c                                         :+:    :+:   :+:     */
/*                                                       +:+    +:+   +:+     */
/*   By: Diogo-ss <contact@diogosilva.dev>               +#+    +:+   +#+     */
/*                                                       +#+    +#+   +#+     */
/*   Created: 2023/05/26 07:47:24 by Diogo-ss            #+#    #+#   #+#     */
/*   Updated: 2023/05/26 07:47:25 by Diogo-ss            ########   #######   */
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
