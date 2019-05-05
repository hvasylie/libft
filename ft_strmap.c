/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvasylie <hvasylie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/03 23:04:45 by hvasylie          #+#    #+#             */
/*   Updated: 2019/05/04 23:16:59 by hvasylie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *result;
	char *temp result;

	if (s == NULL)
		return (NULL);
	result = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (result == NULL)
		return (NULL);
	temp_result = result;
	while(*s != '\0')
	{
		*temp_result = (*f)(*s);
		temp_result++;
		s++;
	}
	*temp_result = '\0';
	return (result);
}
