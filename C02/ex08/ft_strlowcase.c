/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:46:03 by shujiang          #+#    #+#             */
/*   Updated: 2022/11/19 12:22:15 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}
/*
#include<stdio.h>
int  main()
{
    char str1[] = "aBcDeFgs";
    char str2[] = "123uH9~";
    char str3[] = "AISJHZ";

    ft_strlowcase(str1);
    ft_strlowcase(str2);
    ft_strlowcase(str3);
    printf("%s\n%s\n%s", str1, str2, str3);
    return 0;
}*/
