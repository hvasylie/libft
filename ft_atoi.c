/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvasylie <hvasylie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 20:48:00 by hvasylie          #+#    #+#             */
/*   Updated: 2019/05/04 23:07:13 by hvasylie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(char *str)
{
	int	i;
	int	num;
	int	sgn;

	i = 0;
	num = 0;
	sgn = 1;
	if (str[i] == '\0')
		return (0);
	while (str[i] == '\t' || str[i] == '\r' || str[i] == '\f' ||
			str[i] == '\v' || str[i] == '\0' || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sgn = -1;
	while (str[i] >= '0' && str[i] <= '9')
		num = (num * 10) + (str[i++] - '0');
	return (num * sgn);
}
