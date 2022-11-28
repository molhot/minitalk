/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:01:24 by satushi           #+#    #+#             */
/*   Updated: 2022/10/19 09:06:46 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char (*s), int c)
{
	char	src;
	char	*s_2;
	int		num;

	s_2 = (char *)s;
	num = ft_strlen(s_2);
	src = (char)c;
	if(*s == '\0')
		return s;
	if (c == '\0')
		return (s_2 + num);
	while (num != 0)
	{
		if ((unsigned char)*s_2 == (unsigned char)src)
			return (s_2);
		num = num - 1;
		s_2 = s_2 + 1;
	}
	return (NULL);
}
/*
int main(){
    char *src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
    char *d1 = strchr(src, '\0');
    char *d2 = ft_strchr(src, '\0');

    if (d1 == d2)
        printf("%s","OK");
    else{
        printf("%s\n",d1);
        printf("%s\n",d2);
    }
}
*/
