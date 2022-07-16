/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: johmatos < johmatos@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 18:52:37 by johmatos          #+#    #+#             */
/*   Updated: 2022/05/27 03:55:48 by johmatos         ###   ########.fr       */
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
