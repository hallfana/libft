/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samberna <samberna@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 02:20:29 by samberna          #+#    #+#             */
/*   Updated: 2024/11/05 02:23:29 by samberna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int     i;
    char    *dst;

    i = 0;
    dst = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (!dst)
        return (NULL);
    while (i < ft_strlen(s))
    {
        dst[i] = f(i, s[i]);
    }
    dst[i] = '\0';
    return (dst);
}