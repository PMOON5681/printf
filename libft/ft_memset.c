/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <tjiranar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 21:02:34 by tjiranar          #+#    #+#             */
/*   Updated: 2024/09/08 03:14:31 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t len)
{
	unsigned char	*temp;

	if (!ptr)
		return (NULL);
	temp = (unsigned char *)ptr;
	while (len--)
		*(temp++) = (unsigned char)value;
	return (ptr);
}
