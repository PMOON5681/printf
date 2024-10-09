/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <tjiranar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 22:36:33 by tjiranar          #+#    #+#             */
/*   Updated: 2024/09/08 02:07:58 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countchar(int n);

char	*ft_itoa(int n)
{
	int		i;
	int		count;
	long	nbr;
	char	*s;

	nbr = (long)n;
	count = countchar(nbr);
	i = count - 1;
	s = ft_calloc(sizeof(char), count + 1);
	if (!s)
		return (NULL);
	s[0] = '0';
	if (nbr < 0)
	{
		nbr *= -1;
		s[0] = '-';
	}
	while (nbr != 0)
	{
		s[i--] = (nbr % 10) + 48;
		nbr /= 10;
	}
	s[count] = '\0';
	return (s);
}

static int	countchar(int n)
{
	int	c;

	c = 0;
	if (n < 0)
	{
		c++;
		n *= -1;
	}
	if (n == 0)
		c++;
	while (n != 0)
	{
		n /= 10;
		c++;
	}
	return (c);
}
