/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_client.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:54:48 by satushi           #+#    #+#             */
/*   Updated: 2022/11/28 21:45:59 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
//send string

int ft_obtainbite(int num, char *basestring)
{
	size_t	len;

	len = 0;
	if (num <= 1)
		len = len + ft_putchar(basestring[num]);
	else
	{
		len = len + ft_obtainbite(num / 2, basestring);
		len = len + ft_obtainbite(num % 2, basestring);
	}
}

int *char_to_bit(int char_num)
{
	while ()
}

int main(int ac, char **av)
{
	if (ac != 2)
		return 1;
	
	//kill((pid_t)ft_atoi(av[1]), SIGSEGV);
}