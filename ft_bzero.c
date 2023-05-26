/* ************************************************************************** */
/*                                                                            */
/*                                                       ::::::::   :::::::   */
/*   ft_bzero.c                                          :+:    :+:   :+:     */
/*                                                       +:+    +:+   +:+     */
/*   By: Diogo-ss <contact@diogosilva.dev>               +#+    +:+   +#+     */
/*                                                       +#+    +#+   +#+     */
/*   Created: 2023/05/26 07:46:33 by Diogo-ss            #+#    #+#   #+#     */
/*   Updated: 2023/05/26 07:46:39 by Diogo-ss            ########   #######   */
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
