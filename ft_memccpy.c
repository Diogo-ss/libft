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

char    *ft_memccpy(char *strcpy, char *str, char character, size_t size)
{
    size_t count;

    count = 0;
    while (count < size)
    {
        strcpy[count] = str[count];
        
        if(str[count] == character)
            break;

        count++;
    } 

    return strcpy;
}
