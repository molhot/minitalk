/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 19:55:06 by satushi           #+#    #+#             */
/*   Updated: 2022/10/19 01:43:28 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list (**lst), void (*del)(void*))
{
	t_list	*lst_next;

	if (!lst || !del)
		return ;
	while (lst)
	{
		lst_next = (*lst)->next;
		ft_lstdelone(*lst, del);
	}
}
