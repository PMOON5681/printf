/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <tjiranar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 03:02:24 by tjiranar          #+#    #+#             */
/*   Updated: 2024/09/08 03:25:11 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	srcl;
	size_t	dstl;

	if (!dst || !src)
		return (0);
	srcl = ft_strlen(src);
	dstl = ft_strlen(dst);
	if (dstsize <= dstl)
		return (dstsize + srcl);
	i = dstl;
	j = 0;
	while (i < dstsize - 1 && src[j])
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (dstl + srcl);
}
