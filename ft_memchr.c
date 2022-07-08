/* ************************************************************************************* */
/*                                                                                       */
/*                                           ::::::::   :::::::      ::::::::  ::::::::  */
/* ft_memset.c                               :+:    :+:   :+:       :+:    :+::+:    :+: */
/*                                           +:+    +:+   +:+       +:+       +:+        */
/* By: Diogo-ss <diogo-ss@mail.com>          +#+    +:+   +#+  ++#+ +#++:++#+++#++:++#++ */
/*                                           +#+    +#+   +#+              +#+       +#+ */
/* Created: 2022/06/29 18:00:11 by Diogo-ss  #+#    #+#   #+#       #+#    #+##+#    #+# */
/* Updated: 2022/06/29 18:36:17 by Diogo-ss  ########   #######      ########  ########  */
/*                                                                                       */
/* ************************************************************************************* */

#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{  
    char val = 'l';
    size_t i;

    char *src;

    src = (char *) malloc(n * sizeof(char));
    
    ft_memcpy(src, (char *)s, (unsigned int)n);

//     printf("%s", src);
    
    val = (char) c;
    
    i = 0;
    while (i < n)
    {
//         printf("%c", src[i]); 
        if(src[0] == val)
        {
//             printf("okk");
            return ((void *)s+i);
        }
        
        src++;
        i++;
    }

    return NULL;
}
//memchr(const void *, int, unsigned long);
