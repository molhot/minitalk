/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 19:46:33 by satushi           #+#    #+#             */
/*   Updated: 2022/10/15 20:21:29 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list (*lst))
{
	t_list	*next_lst;

	if (lst == NULL)
		return (NULL);
	next_lst = lst;
	while (next_lst->next != NULL)
		next_lst = next_lst->next;
	return (next_lst);
}
