/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvasylie <hvasylie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 21:27:26 by hvasylie          #+#    #+#             */
/*   Updated: 2019/05/04 23:07:35 by hvasylie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*i;
	char		*j;

	j = dst;
	i = src;
	while (n-- > 0)
	{
		*j = *i;
		i++;
		j++;
	}
	return (dst);
}
