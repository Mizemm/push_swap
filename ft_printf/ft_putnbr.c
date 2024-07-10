/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mizem <mizem@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:13:44 by mizem             #+#    #+#             */
/*   Updated: 2024/01/22 11:54:47 by mizem            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	sign;
	int	count;

	sign = 1;
	count = 0;
	if (n == -2147483648)
		count += write(1, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			count += write (1, "-", 1);
			n = -n;
		}
		if (n < 10)
			count += ft_putchar(n + 48);
		else
		{
			count += ft_putnbr(n / 10);
			count += ft_putchar(n % 10 + 48);
		}
	}
	return (count);
}
