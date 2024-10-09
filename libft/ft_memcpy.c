/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <tjiranar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 21:54:30 by tjiranar          #+#    #+#             */
/*   Updated: 2024/09/08 03:37:16 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*temp_dst;
	const unsigned char	*temp_src;

	if (!src && !dst)
		return (NULL);
	temp_dst = (unsigned char *)dst;
	temp_src = (const unsigned char *)src;
	while (n--)
		*(temp_dst++) = *(temp_src++);
	return (dst);
}
