/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <tjiranar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 03:42:57 by tjiranar          #+#    #+#             */
/*   Updated: 2024/09/08 03:30:08 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_trim(char c, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*trimed;

	if (!s1 || !set)
		return (0);
	i = 0;
	j = ft_strlen(s1) - 1;
	trimed = (char *)s1;
	if (ft_strlen(s1) == 0 || ft_strlen(set) == 0)
		return (ft_strdup(trimed));
	while (s1[i])
	{
		if (!(check_trim(s1[i], set)))
			break ;
		i++;
	}
	while (s1[j])
	{
		if (!(check_trim(s1[j], set)))
			break ;
		j--;
	}
	trimed = ft_substr(s1, i, j - i + 1);
	return (trimed);
}

static int	check_trim(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}
