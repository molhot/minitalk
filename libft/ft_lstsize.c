/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 19:40:23 by satushi           #+#    #+#             */
/*   Updated: 2022/10/16 17:47:32 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list (*lst))
{
	int		counter;
	t_list	*next_lst;

	if (!lst)
		return (0);
	next_lst = lst;
	counter = 0;
	while (next_lst->next != NULL)
	{
		counter = counter + 1;
		next_lst = next_lst->next;
	}
	return (counter + 1);
}
