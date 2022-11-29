/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 20:06:16 by satushi           #+#    #+#             */
/*   Updated: 2022/11/29 07:49:53 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*dest;
	size_t	i;

	if((n == 0) || (size == 0))
	{
		dest = ft_calloc(1, 1);
		return (dest);
	}
	if((SIZE_MAX / n <= size) || (SIZE_MAX / size <= n))
	{
		dest = ft_calloc(1, 1);
		return (dest);
	}
	dest = malloc(n * size);
	if (dest == NULL)
		return (dest);
	ft_bzero(dest, n * size);
	return (dest);
}
