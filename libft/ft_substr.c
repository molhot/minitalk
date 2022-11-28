/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 15:51:04 by satushi           #+#    #+#             */
/*   Updated: 2022/10/19 13:07:21 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//エラー処理（substr）
#include "libft.h"

char	*ft_substr(char const (*s), unsigned int start, size_t len)
{
	char	*substr;
	char	*firstaddress;
	int 	i;

	if (!(*s) || (ft_strlen(s) <= start))
		return (NULL);
	if (ft_strlen(s) == 0)
		return (ft_strdyp(""));
	if(ft_strlen(s) - start < len)
		len = ft_strlen(s) - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!(substr))
		return (NULL);
	s = s + start;
	i = 0;
	while (i != len)
	{
		substr[i] = (unsigned char)s[i];
		i = i + 1;
	}
	substr[i] = '\0';
	return (substr);
}

/*
#include<stdio.h>
int main(){
	char *str = "i just want this part #############";
	size_t size = 10;
	char *ret = ft_substr(str, 0, size);

	printf("%s\n",ret);
	printf("%lu\n",strlen(ret));
}
*/
