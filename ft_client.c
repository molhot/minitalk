/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_client.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <satushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:54:48 by satushi           #+#    #+#             */
/*   Updated: 2022/12/04 16:18:27 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"
//send string

int	main(int ac, char **av)
{
	char	*sub;
	int		i;
	int		shitcounter;

	if (ac != 3)
		return (1);
	sub = av[2];
	i = 0;
	while (sub[i] != '\0')
	{
		shitcounter = 0;
		while (shitcounter <= 7)
		{
			if ((sub[i] >> shitcounter) & 000000001)
				kill((pid_t)ft_atoi(av[1]), SIGUSR1);
			else
				kill((pid_t)ft_atoi(av[1]), SIGUSR2);
			shitcounter++;
			usleep(1000);
		}
		i++;
	}
}
