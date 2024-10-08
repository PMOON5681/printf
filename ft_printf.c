/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <tjiranar@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 00:48:11 by tjiranar          #+#    #+#             */
/*   Updated: 2024/10/09 02:07:24 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...);
static int	ft_checktype(const char c, va_list *args);

int ft_printf(const char *format, ...)
{
	int		i;
	int		len;
	va_list	args;

	i = 0;
	len = 0;
	va_start( args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			len += ft_checktype(format[i + 1], &args);
			i++;
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			len++;
		}
		i++;
	}
	va_end( args);
	return (len);
}

static int	ft_checktype(const char c, va_list *args)
{
	unsigned int	len;

	len = 0;
	if (c == 'c')
		len += ft_printf_char(va_arg(*args, int));
	else if (c == 's')
		len += ft_printf_string(va_arg(*args, char *));
	else if (c == 'p')
		len += ft_printf_pointer(va_arg(*args, void *));
	else if (c == 'd' || c == 'i')
		len += ft_printf_decimal(va_arg(*args, int));
	else if  (c == 'u')
		len += ft_printf_unsigned_decimal(va_arg(*args, unsigned int));
	else if (c == 'x')
		len += ft_printf_hex(va_arg(*args, int), 1);
	else if (c == 'X')
		len += ft_printf_hex(va_arg(*args, int), 0);
	else if (c == '%')
	{
		ft_putchar_fd('%', 1);
		len += 1;
	}
	return (len);
}

int	main(void)
{
	int	count;

	count = ft_printf("%x", NULL);
	ft_printf("\n%d", count);
}