/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:55:10 by shujiang          #+#    #+#             */
/*   Updated: 2022/11/19 12:20:42 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
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
	char str3[] = "";
	
	ft_strupcase(str1);
	ft_strupcase(str2);
	ft_strupcase(str3);
    printf("%s\n%s\n%s", str1, str2, str3);
    return 0;
} */
