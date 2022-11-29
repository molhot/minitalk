/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 17:33:34 by satushi           #+#    #+#             */
/*   Updated: 2022/11/29 07:54:35 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minitalk.h"

size_t	ft_strlen(const char (*string_row))
{
	size_t	counter;

	counter = 0;
	while ((*string_row) != '\0')
	{
		counter = counter + 1;
		string_row = string_row + 1;
	}
	return (counter);
}
