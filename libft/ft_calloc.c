/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <tjiranar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 04:50:26 by tjiranar          #+#    #+#             */
/*   Updated: 2024/09/08 01:47:34 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;

	if (count != 0 && size > INT_MAX / count)
		return (NULL);
	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	ft_memset(tmp, 0, count * size);
	return ((void *)tmp);
}
