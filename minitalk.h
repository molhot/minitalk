/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:22:11 by satushi           #+#    #+#             */
/*   Updated: 2022/11/29 21:34:59 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MINITALK_H
# define FT_MINITALK_H

#ifndef SIGUSR1
# define SIGUSR1

#endif

# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <signal.h>
# include <sys/types.h>
# include <unistd.h>
# include <stdio.h>
# include <stddef.h>

size_t	ft_putchar(char inputchar_num);
size_t	ft_putchar_string(char *sub_string);
size_t	inputnbr(long long subject, char *src);
int		ft_atoi(const char *str);

typedef struct s_char
{
	int		bits_shifted_counter;
	char	assembled_char;
} t_char;

#endif