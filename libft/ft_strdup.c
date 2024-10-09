/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <tjiranar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 04:37:36 by tjiranar          #+#    #+#             */
/*   Updated: 2024/09/08 03:19:52 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = -1;
	while (s2[++i])
		s1[i] = s2[i];
	s1[i] = '\0';
}

char	*ft_strdup(char *src)
{
	char	*ptr;

	if (!src)
		return (NULL);
	ptr = (char *)malloc(ft_strlen(src) + 1);
	if (!ptr)
		return (0);
	ft_strcpy(ptr, src);
	return (ptr);
}
