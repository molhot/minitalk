/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 19:11:55 by satushi           #+#    #+#             */
/*   Updated: 2022/10/19 08:58:33 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const int	digitcounter(long n)
{
	long	digit;

	digit = 0;
	while (n != 0)
	{
		n = n / 10;
		digit = digit + 1;
	}
	return (digit);
}

void	write_num(long max_numdigit, long n, int fd)
{
	if (max_numdigit >= 10)
	{
		while (max_numdigit >= 10)
		{
			ft_putchar_fd((n / max_numdigit) + 48, fd);
			n = n % max_numdigit;
			max_numdigit = max_numdigit / 10;
		}
		ft_putchar_fd(n + 48, fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	long	digit;
	long	n_cp;
	long	max_numdigit;

	n_cp = (long)n;
	if (n_cp == 0 || n_cp == -2147483648 || fd < 0)
	{
		if(n_cp == 0)
			ft_putstr_fd("0", fd);
		if (n_cp == -2147483648)
			ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n_cp < 0)
	{
		ft_putchar_fd('-', fd);
		n_cp = n_cp * (-1);
	}
	digit = digitcounter(n_cp) + 1;
	max_numdigit = 1;
	if (n_cp < 10)
		ft_putchar_fd(n_cp + '0', fd);
	while (digit-- != -1)
		max_numdigit = max_numdigit * 10;
	write_num(max_numdigit, n_cp, fd);
}
