/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 13:57:02 by shujiang          #+#    #+#             */
/*   Updated: 2022/11/19 12:15:36 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*#include<stdio.h>
int  main()
{
    char    *str1, *str2, *str3;
    int n1, n2, n3;

    str1 = "ABSCGE";
    str2 = " SQAUSH";
    str3 = "";

    n1 = ft_str_is_uppercase(str1);
    n2 = ft_str_is_uppercase(str2);
    n3 = ft_str_is_uppercase(str3);
    printf("%d\n%d\n%d", n1, n2, n3);
    return 0;
}*/
