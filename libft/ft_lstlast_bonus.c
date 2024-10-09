/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <tjiranar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 01:18:13 by tjiranar          #+#    #+#             */
/*   Updated: 2024/09/07 01:43:44 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*counter;

	if (!lst)
		return (NULL);
	counter = lst;
	while (counter)
	{
		if (counter->next == NULL)
			return (counter);
		counter = counter->next;
	}
	return (counter);
}
