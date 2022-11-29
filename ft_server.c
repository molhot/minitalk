/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_server.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 12:54:33 by satushi           #+#    #+#             */
/*   Updated: 2022/11/29 22:40:32 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "minitalk.h"

t_char	g_char;

void init_struct(void)
{
	g_char.bits_shifted_counter = 0;
	g_char.assembled_char = '\0';
}

void	ft_putchar_fd(char c, int fd)
{
	unsigned char	c_alt;

	if(fd < 0)
		return ;
	c_alt = (unsigned char)c;
	write(fd, &c_alt, 1);
}

void recomponent(int signal)
{
	//int counter = 1;
	if (signal == SIGUSR1)
	{
		g_char.assembled_char += 000000001 << g_char.bits_shifted_counter;
		//printf("%d\n", g_char.assembled_char);
	}
	if(g_char.bits_shifted_counter == 7)
	{
		ft_putchar_fd(g_char.assembled_char, 0);
		init_struct();
		return ;
	}
	g_char.bits_shifted_counter++;
}

int main()
{
	pid_t PID;

	PID = getpid();
	signal(SIGUSR1, recomponent);
	signal(SIGUSR2, recomponent);
	init_struct();
	printf("PID is %d\n", PID);
	while(1)
		pause();
	printf("\n");
	return 0;
}