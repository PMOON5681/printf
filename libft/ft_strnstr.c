/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <tjiranar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 04:27:45 by tjiranar          #+#    #+#             */
/*   Updated: 2024/09/08 03:28:50 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!haystack || !needle)
		return (NULL);
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		if (haystack[i + j] == needle[j])
		{
			while ((needle[j] != '\0') && (i + j) < len
				&& (haystack[i + j] == needle[j]))
				j++;
			if (needle[j] == '\0')
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}
