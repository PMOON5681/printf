/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <tjiranar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 00:55:15 by tjiranar          #+#    #+#             */
/*   Updated: 2024/09/17 22:18:35 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (!(fd < 0))
	{
		if (n == -2147483648)
		{
			ft_putchar_fd('-', fd);
			ft_putchar_fd('2', fd);
			n = 147483648;
		}
		if (n < 0)
		{
			ft_putchar_fd('-', fd);
			n *= -1;
			ft_putnbr_fd(n, fd);
		}
		else if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd(n % 10, fd);
		}
		else
			ft_putchar_fd(n + 48, fd);
	}
}
