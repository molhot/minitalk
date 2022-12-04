/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_server.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <satushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:54:33 by satushi           #+#    #+#             */
/*   Updated: 2022/12/04 15:33:26 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

t_char	g_char;

void	ft_putchar_string(char *string)
{
	size_t	char_len;

	char_len = 0;
	while (string[char_len] != 0)
		char_len++;
	write(1, &string, char_len);
}

void	recomponent(int signal)
{
	if (signal == SIGUSR1)
		g_char.last_ch += 00000001 << g_char.bitcounter;
	if (g_char.bitcounter == 7)
	{
		//ft_putchar_fd(g_char.last_ch, 0);
		write(0, &g_char.last_ch, 1);
		g_char.bitcounter = 0;
		g_char.last_ch = '\0';
		return ;
	}
	g_char.bitcounter++;
}

int	main(void)
{
	pid_t	this_pid;

	this_pid = getpid();
	signal(SIGUSR1, recomponent);
	signal(SIGUSR2, recomponent);
	g_char.bitcounter = 0;
	g_char.last_ch = '\0';
	ft_putchar_string("PID is %d\n", this_pid);
	while (1)
		pause();
	return (0);
}
