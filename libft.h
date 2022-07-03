/* ************************************************************************************* */
/*                                                                                       */
/*                                           ::::::::   :::::::      ::::::::  ::::::::  */
/* libft.h                                   :+:    :+:   :+:       :+:    :+::+:    :+: */
/*                                           +:+    +:+   +:+       +:+       +:+        */
/* By: Diogo-ss <diogo-ss@mail.com>          +#+    +:+   +#+  ++#+ +#++:++#+++#++:++#++ */
/*                                           +#+    +#+   +#+              +#+       +#+ */
/* Created: 2022/06/29 18:00:42 by Diogo-ss  #+#    #+#   #+#       #+#    #+##+#    #+# */
/* Updated: 2022/06/29 19:42:12 by Diogo-ss  ########   #######      ########  ########  */
/*                                                                                       */
/* ************************************************************************************* */

#ifndef LIBFT_H
# define LIBFT_H

/* Headers ***************************************************************************** */

# include <unistd.h>
# include <stdlib.h>

/* Library Prototype ******************************************************************* */

void    ft_memset(char *string, char character, unsigned int size);
void    ft_bzero(char *string, unsigned int size);
void    *ft_memcpy(char *strc, char *str, unsigned int size);
char    *ft_memccpy(char *strcpy, char *str, char character, size_t size);
char    *ft_memmove(char *dest, char *src, size_t len);

#endif
