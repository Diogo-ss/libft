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

char    *ft_memmove(void *dst, const void *src, size_t len)
{
    char *dst_l;
    char *src_l;
    size_t count;

    dst_l = (char *) dst;
    src_l = (char *) src;

    count = 0;
    while (count < len) 
    {
        if (src_l[count] == '\0')
            break;
        
        dst_l[count] = src_l[count];
        
        count++;
    }
    return dst;
}
