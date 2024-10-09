/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <tjiranar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 03:55:13 by tjiranar          #+#    #+#             */
/*   Updated: 2024/09/08 03:29:11 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	int		last;
	char	ch;

	i = 0;
	last = -1;
	ch = (char)c;
	if (!str)
		return (NULL);
	while (str[i])
	{
		if (str[i] == ch)
			last = i;
		i++;
	}
	if (str[i] == ch)
		last = i;
	if (last >= 0)
		return ((char *)&str[last]);
	return (NULL);
}
