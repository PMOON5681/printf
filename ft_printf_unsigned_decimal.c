/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned_decimal.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <tjiranar@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 18:00:41 by tjiranar          #+#    #+#             */
/*   Updated: 2024/10/09 00:48:22 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_unsigned_decimal(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 9)
		count += ft_printf_unsigned_decimal(n / 10);
	count += ft_printf_char((n % 10) + '0');
	return (count);
}