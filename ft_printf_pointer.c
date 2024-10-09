/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <tjiranar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 23:30:56 by tjiranar          #+#    #+#             */
/*   Updated: 2024/10/09 20:50:13 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdint.h>

static int	ft_size(unsigned long	n)
{
	int	digit;

	digit = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 16;
		digit++;
	}
	return (digit);
}

static int	ft_to_hex(unsigned long n)
{
	char	*base;
	int		size;

	size = 0;
	size = ft_size(n);
	base = "0123456789abcdef";
	if (n > 16)
	{
		ft_to_hex(n / 16);
		ft_printf_char(base[n % 16]);
	}
	else
		ft_printf_char(base[n]);
	return (size);
}

int	ft_printf_pointer(void *ptr)
{
	int				count;
	unsigned long	adr;

	if (!ptr)
		return (ft_printf_string("(nil)"));
	count = 0;
	adr = (unsigned long)ptr;
	count += ft_printf_string("0x");
	count += ft_to_hex(adr);
	return (count);
}
