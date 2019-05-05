/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvasylie <hvasylie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 22:13:58 by hvasylie          #+#    #+#             */
/*   Updated: 2019/05/04 23:15:21 by hvasylie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1));
	while (str[i])
	{
		str[i] = s1[i];
		i++;
	}
	return (str);
}
