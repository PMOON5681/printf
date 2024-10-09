/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjiranar <tjiranar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 01:07:14 by tjiranar          #+#    #+#             */
/*   Updated: 2024/09/07 01:17:18 by tjiranar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*counter;

	count = 0;
	counter = lst;
	while (counter)
	{
		count++;
		counter = counter->next;
	}
	return (count);
}
