/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_client.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:54:48 by satushi           #+#    #+#             */
/*   Updated: 2022/11/29 22:20:05 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
//send string

int main(int ac, char **av)
{
	char *sub;
	int i;
	int shitcounter;

	sub = av[2];
	i = 0;
	while (sub[i] != '\0')
	{
		shitcounter = 0;
		while (shitcounter <= 7)
		{
			if((sub[i] >> shitcounter) & 000000001)
				kill((pid_t)ft_atoi(av[1]), SIGUSR1);
			else
				kill((pid_t)ft_atoi(av[1]), SIGUSR2);
			shitcounter++;
			usleep(1000);
		}
		i++;
	}
	//kill((pid_t)atoi(av[1]), SIGTERM);
}