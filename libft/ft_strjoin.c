/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <tjiranar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 02:36:42 by tjiranar          #+#    #+#             */
/*   Updated: 2024/09/08 03:24:18 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	t;
	char	*join;

	if (!s1 || !s2)
		return (NULL);
	if (ft_strlen(s1) == 0 && ft_strlen(s2) == 0)
		return (ft_strdup(""));
	t = ft_strlen(s1) + ft_strlen(s2);
	join = ft_calloc(t + 1, sizeof(char));
	if (!join)
		return (NULL);
	ft_memcpy(join, s1, ft_strlen(s1));
	ft_strlcat(join, s2, t + 1);
	return (join);
}
