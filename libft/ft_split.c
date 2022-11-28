/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: satushi <sakata19991214@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 18:17:22 by satushi           #+#    #+#             */
/*   Updated: 2022/10/19 13:09:28 by satushi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//リークの確認
#include "libft.h"
#include<stdio.h>

static int	structure_in(const char (*s), char c)
{
	int	individual_arrangementlength;

	individual_arrangementlength = 0;
	while ((*s) == c)
		s = s + 1;
	if ((*s) == '\0')
		return (0);
	while ((*s) != c)
	{
		individual_arrangementlength = individual_arrangementlength + 1;
		s = s + 1;
		if (*s == '\0')
			break ;
	}
	return (individual_arrangementlength + 1);
}

static char	**secure_arrangement(const char (*s), char c)
{
	char	**arrangement;
	int		arrangement_row;

	arrangement_row = 0;
	while ((*s) == c)
		s = s + 1;
	while ((*s) != '\0')
	{
		if ((*s) == c)
		{
			while ((*s) == c)
				s = s + 1;
			if ((*s) == '\0')
				break ;
			arrangement_row = arrangement_row + 1;
			s = s - 1;
		}
		s = s + 1;
	}
	arrangement = (char **)malloc(sizeof(char *) * (arrangement_row + 1));
	if (!(arrangement))
		return (NULL);
	arrangement[arrangement_row] = NULL;
	return (&arrangement[0]);
}

static int	ft_insert_arrangement(char (*row), const char (*s), char c)
{
	int	counter;

	counter = 0;
	while (((*(s + counter)) == c) && (*(s + counter)) != '\0')
		counter = counter + 1;
	if (*(s + counter) == '\0')
		return (counter);
	while (((*(s + counter)) != c) && (*(s + counter) != '\0'))
	{
		*row = *(s + counter);
		row = row + 1;
		counter = counter + 1;
	}
	*row = '\0';
	return (counter);
}

char	**ft_free(int i, char (**arrangement))
{
	while (i-- != -1)
		free((char *)arrangement[i]);
	free(arrangement);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**arrangement;
	int		counter;
	int		i;

	if (s == NULL)
		return (NULL);
	arrangement = secure_arrangement(s, c);
	if (!(arrangement))
		return (NULL);
	if (*s == '\0')
		arrangement[0] = ft_strdup("");
	i = 0;
	while (*s != '\0')
	{
		if (structure_in(s, c) == 0)
			break ;
		arrangement[i] = (char *)malloc(sizeof(char) * structure_in(s, c));
		if (!(arrangement[i]))
			return (ft_free(i, arrangement));
		s = s + ft_insert_arrangement(arrangement[i], s, c);
		i = i + 1;
	}
	return (&arrangement[0]);
}

/*
#include<stdio.h>
#include<string.h>
int main(){
	char **spliter;
	// int i;

	// i = 0;
	spliter = ft_split("abcdfbacdebde", 'b');
	// //printf("(%p)", spliter);
	//char *ptr = "hoge";
	//printf("%p\n", ptr);
	//char *ptr = 'a';// \0
	//char *ptr = 97;
	//rintf("%p", ptr);
	//printf("%p\n", ptr);

	//char *s = "      splitthis for   me  !";
	int i=0;
	while(spliter[i]){
		printf("%d is %s\n",i , spliter[i]);
		free(spliter[i]);
		i++;
	}
}

__attribute__((destructor))
static void destructor() {
    system("leaks -q a.out");
}
*/
