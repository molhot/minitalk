/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 17:25:04 by satushi           #+#    #+#             */
/*   Updated: 2022/10/19 00:10:38 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_strncmp(const char (*s1), const char (*s2), size_t n)
{
	unsigned char	*s1_1;
	unsigned char	*s2_2;

	s1_1 = (unsigned char *)s1;
	s2_2 = (unsigned char *)s2;
	while ((*s1_1 != '\0') && (n != 0) && (*s2_2 != '\0'))
	{
		if ((*s1_1) != (*s2_2))
			return ((*s1_1) - (*s2_2));
		else
		{
			s1_1 = s1_1 + 1;
			s2_2 = s2_2 + 1;
		}
		n = n - 1;
	}
	return ((*s1_1) - (*s2_2));
}
/*
#include<stdio.h>
#include<string.h>
int main(){
    char *s1 = "abcdef";
    char *s2 = "abcdefghijklmnop";
    int i1;
    int i2;

    i1 = strncmp(s1, s2, 6);
    i2 = ft_strncmp(s1, s2, 6);
    printf("%d\n", i1);
    printf("%d\n", i2);
    if (i1 == i2)
        printf("%s","OK");
}
*/
