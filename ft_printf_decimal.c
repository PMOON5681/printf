/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_decimal.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <tjiranar@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 17:58:36 by tjiranar          #+#    #+#             */
/*   Updated: 2024/10/09 00:40:15 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printf_nbr(int n)
{
	int	count;
	int	digit;
	int	num;

	count = 0;
	digit = 1;
	num = n;
	while (num > 9)
	{
		num = num / 10;
		digit = digit * 10;
	}
	while (digit > 0)
	{
		count += ft_printf_char((n / digit) + '0');
		n = n % digit;
		digit = digit / 10;
	}
	return (count);
}

int	ft_printf_decimal(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
		return (ft_printf_string("-2147483648"));
	else if (n < 0)
	{
		count += ft_printf_char('-');
		n = n * -1;
	}
	count += ft_printf_nbr(n);
	return (count);
}