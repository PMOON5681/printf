/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <tjiranar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 23:33:03 by tjiranar          #+#    #+#             */
/*   Updated: 2024/10/09 20:46:44 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_size_hex(unsigned int n)
{
	int	size;

	size = 1;
	while (n >= 16)
	{
		n = n / 16;
		size++;
	}
	return (size);
}

int	ft_printf_hex(unsigned int n, int flag)
{
	char	*base;
	int		size;

	size = 0;
	size = ft_size_hex(n);
	base = "0123456789abcdef";
	if (flag == 0)
		base = "0123456789ABCDEF";
	if (n > 16)
	{
		ft_printf_hex(n / 16, flag);
		ft_printf_char(base[n % 16]);
	}
	else
		ft_printf_char(base[n]);
	return (size);
}
