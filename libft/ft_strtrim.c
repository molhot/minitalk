/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 16:13:04 by satushi           #+#    #+#             */
/*   Updated: 2022/10/19 00:48:13 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*check_first(char const (*s1), char const (*set))
{
	size_t	len;

	len = 0;
	len = ft_strlen(s1);
	while (len != 0)
	{
		if (ft_strchr(set, (*s1)) == 0)
			break ;
		len = len - 1;
		s1 = s1 + 1;
	}
	return ((char *)s1);
}

static	char	*check_last(char const *s1, char const *set)
{
	size_t	len;

	len = 0;
	len = ft_strlen(s1);
	s1 = s1 + len - 1;
	while (len-- != 0)
	{
		if (ft_strchr(set, (*s1)) == 0)
			break ;
		s1 = s1 - 1;
	}
	return ((char *)(s1 + 1));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*s1_copy;
	const char	*firstaddress;
	const char	*lastaddress;
	int			len;

	if (!(s1))
		return (NULL);
	if(!(set))
		return (NULL);
	len = 0;
	firstaddress = check_first(s1, set);
	lastaddress = check_last(s1, set);
	if (firstaddress >= lastaddress)
		return (ft_strdup(""));
	s1_copy = (char *)malloc(sizeof(char) * (lastaddress - firstaddress + 1));
	if (!(s1_copy))
		return (NULL);
	ft_strlcpy(s1_copy, firstaddress, (size_t)(lastaddress - firstaddress + 1));
	return (s1_copy);
}
/*
int main(){
    char *s1 = "";
    char *s2 = "";
    char *ret = ft_strtrim(s1, " \n\t");

	printf("%s\n", "here is original");
	printf("%s\n", s2);
    printf("%s\n", "here is your anser!!");
    printf("%s\n", ret);
}
*/
