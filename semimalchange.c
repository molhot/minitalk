/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   semimalchange.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 20:25:25 by satushi           #+#    #+#             */
/*   Updated: 2022/11/28 21:28:41 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <minitalk.h>
#include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <signal.h>
# include <sys/types.h>
# include <unistd.h>


size_t	ft_putchar(char inputchar_num)
{
	write(1, &inputchar_num, 1);
}

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

int main()
{
	int stringlen;

	stringlen = ft_obtainbite(10, "01");
	ft_putchar('\n');
	return 0;
}