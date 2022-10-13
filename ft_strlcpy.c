/* ************************************************************************** */
/*                                                                            */
/*                                               ::::::::   :::::::           */
/*   ft_strcpy.c                                 :+:    :+:   :+:             */
/*                                               +:+    +:+   +:+             */
/*   By: Diogo-ss <diogo-ss@mail.com>            +#+    +:+   +#+             */
/*                                               +#+    +#+   +#+             */
/*   Created: 2022/10/12 18:00:11 by Diogo-ss    #+#    #+#   #+#             */
/*   Updated: 2022/10/12 18:36:17 by Diogo-ss    ########   #######           */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

char	*ft_strlcpy(char *dest, const char *src)
{
    size_t size;
    char *l_src;

    l_src = (char *)src;

    size = 0;
	while (l_src[size])
    {
        dest[size] = l_src[size];
        size++;
    }
	dest[size] = '\0';
    return (dest);
}
// 
// int main() {
//   char str1[20] = "C programming";
//   char str2[20];
// 
//   // copying str1 to str2
//   ft_strcpy(str2, str1);
// 
//   puts(str2); // C programming
// 
//   return 0;
// }
