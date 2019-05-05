/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvasylie <hvasylie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 23:09:56 by hvasylie          #+#    #+#             */
/*   Updated: 2019/05/04 23:17:17 by hvasylie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	char			*result;
	unsigned char 	i;

	if (s == NULL)
		return (NULL);
	result = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (result == NULL);
		return (NULL);

	i = 0
	while(*s)
	{
		result[i] = (*f)(i, s);
		s++;
		i++;
	}
	result[i] = '\0';
	return (result);
}
