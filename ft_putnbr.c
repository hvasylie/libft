/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hvasylie <hvasylie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 14:27:57 by hvasylie          #+#    #+#             */
/*   Updated: 2019/05/07 16:09:06 by hvasylie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	char c;

	if (n == -2147483648)
		ft_putstr("-2147483648");
	else if (n < 0)
	{
		write(1, "-", 1);
		n = n * -1;
	}
	else if (n > 0)
	{
		ft_putnbr(n / 10);
		c = n % 10 + '0';
		write(1, &c, 1);
	}
	else
		ft_putchar(n + '0');
}