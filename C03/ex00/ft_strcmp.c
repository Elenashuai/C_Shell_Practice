/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 10:48:29 by shujiang          #+#    #+#             */
/*   Updated: 2022/11/20 14:19:48 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
#include<stdio.h>
int	main ()
{
	char	str1[] = "helloo";
	char	str2[] = "hello";
	int n = ft_strcmp (str1, str2);
	printf("%d", n);
	return 0;
}*/
