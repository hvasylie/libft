/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvasylie <hvasylie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 23:02:41 by hvasylie          #+#    #+#             */
/*   Updated: 2019/05/04 23:09:41 by hvasylie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (src[i])
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	return (dst);
}
