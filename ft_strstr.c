/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvasylie <hvasylie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 19:53:50 by hvasylie          #+#    #+#             */
/*   Updated: 2019/05/05 00:01:27 by hvasylie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strstr(const char *haystack, const char *needle)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (haystack[i] == '\0')
        return(0);
    while (haystack[i])
    {
        while (needle[j])
        {
            if (haystack[i] == needle[j])
            return((char*)needle);
            i++;
            j++;
        }
    i++;
    }
    return(0);
}

int     main()
{
    char *str = "hello";
    char *str2 = "l";
    printf("ft_strstr: %s", "hello", "el");
}
