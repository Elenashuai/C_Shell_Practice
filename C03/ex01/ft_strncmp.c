/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 13:08:02 by shujiang          #+#    #+#             */
/*   Updated: 2022/11/22 14:09:12 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{	
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}	
/*
#include<stdio.h>
#include<string.h>
int main ()
{
    char    str1[] = "abcd";
    char    str2[] = "abc";
	int m = strncmp (str1, str2, 6);
    int n =ft_strncmp (str1, str2, 6);
    printf("%d\n", n);
	printf("%d", m);
    return 0;
}*/
