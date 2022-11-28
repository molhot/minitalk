/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:22:11 by satushi           #+#    #+#             */
/*   Updated: 2022/11/28 21:00:08 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MINITALK_H
# define FT_MINITALK_H

# include <string.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <signal.h>
# include <sys/types.h>
# include <unistd.h>

int		ft_printf(const char *fmt_or_nch, ...);
size_t	ft_putchar(char inputchar_num);
size_t	ft_putchar_string(char *sub_string);
size_t	ft_putaddr_to_hexia(unsigned long long num, char *basestring);
size_t	ft_putnum_to_hexia(long long num, char *basestring);
size_t	inputnbr(long long subject, char *src);
int		ft_atoi(const char *str);

#endif