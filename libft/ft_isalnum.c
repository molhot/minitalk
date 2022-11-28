/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 20:05:16 by satushi           #+#    #+#             */
/*   Updated: 2022/10/18 21:46:30 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int num)
{
	if ((48 > num) || (57 < num))
	{
		if ((65 > num) || (90 < num))
		{
			if ((97 > num || 122 < num))
			{
				return (0);
			}
		}
	}
	return (num);
}