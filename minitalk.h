/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <satushi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:22:11 by satushi           #+#    #+#             */
/*   Updated: 2022/12/04 15:39:41 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

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
void	ft_putchar_fd(char c, int fd);
int		ft_printf(const char *fmt_or_nch, ...);

typedef struct s_char
{
	int		bitcounter;
	char	last_ch;
}	t_char;

#endif