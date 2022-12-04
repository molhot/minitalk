/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_server.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <satushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:54:33 by satushi           #+#    #+#             */
/*   Updated: 2022/12/04 15:46:31 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

t_char	g_char;

void	recomponent(int signal)
{
	if (signal == SIGUSR1)
		g_char.last_ch += 00000001 << g_char.bitcounter;
	if (g_char.bitcounter == 7)
	{
		write(0, &g_char.last_ch, 1);
		g_char.bitcounter = 0;
		g_char.last_ch = '\0';
		return ;
	}
	g_char.bitcounter++;
}

int	main(void)
{
	signal(SIGUSR1, recomponent);
	signal(SIGUSR2, recomponent);
	g_char.bitcounter = 0;
	g_char.last_ch = '\0';
	ft_printf("PID is %d\n", getpid());
	while (1)
		pause();
	return (0);
}
