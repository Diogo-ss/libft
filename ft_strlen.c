/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::   :::::::   */
/*   ft_strlen.c                                         :+:    :+:   :+:     */
/*                                                       +:+    +:+   +:+     */
/*   By: Diogo-ss <contact@diogosilva.dev>               +#+    +:+   +#+     */
/*                                                       +#+    +#+   +#+     */
/*   Created: 2023/05/26 07:47:48 by Diogo-ss            #+#    #+#   #+#     */
/*   Updated: 2023/05/26 07:47:49 by Diogo-ss            ########   #######   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	count;

	count = 0;
	while (str[count])
	{
		count++;
	}
	return (count);
}
