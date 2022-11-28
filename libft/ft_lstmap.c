/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 20:19:40 by satushi           #+#    #+#             */
/*   Updated: 2022/10/16 17:44:02 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list (*lst), void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_new;
	t_list	*let_in;

	if (!f || !lst || !del)
		return (NULL);
	while (lst)
	{
		lst_new = ft_lstnew(f(lst->content));
		if (lst_new == NULL)
		{
			ft_lstclear(&lst_new, del);
			return (NULL);
		}
		ft_lstadd_back(&lst_new, let_in);
		lst = lst->next;
	}
	return (lst_new);
}
