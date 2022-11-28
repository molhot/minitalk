/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 20:01:42 by satushi           #+#    #+#             */
/*   Updated: 2022/10/19 01:51:53 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list (**lst), t_list (*new))
{
	t_list	*lst_content;

	if (lst == NULL)
	{
		//*lstのなかみなのでcontentもnextもある
		lst_content = *lst;
		lst_content->content = new->content;
		lst = &lst_content;
		return ;
	}
	lst_content = *lst;
	while (lst_content->next != NULL)
		lst_content = lst_content->next;
	lst_content->next = new;
}
