/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvasylie <hvasylie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 17:13:53 by hvasylie          #+#    #+#             */
/*   Updated: 2019/05/13 23:12:23 by hvasylie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*res;
	int		len;
	int		i;

	len = ft_strlen((char*)s1) + ft_strlen((char*)s2);
	res = (char*)malloc(sizeof(char) * len + 1);
	i = 0;
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
		s1++;
	}
	while (s2[i])
	{
		res[i] = s2[i];
		i++;
		s2++;
	}
	res[i] = '\0';
	return (res);
}
