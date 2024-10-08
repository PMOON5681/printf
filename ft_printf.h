/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <tjiranar@student.42bangkok.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 01:55:28 by tjiranar          #+#    #+#             */
/*   Updated: 2024/10/09 01:33:36 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>
# include <stdio.h>

int			ft_printf(const char *format, ...);
static int	ft_checktype(const char c, va_list *args);

int			ft_printf_char(int c);
int			ft_printf_string(char *str);
int			ft_printf_pointer(void *ptr);
int			ft_printf_decimal(int n);
int			ft_printf_unsigned_decimal(unsigned int n);
int			ft_printf_hex(unsigned int n, int flag);

#endif