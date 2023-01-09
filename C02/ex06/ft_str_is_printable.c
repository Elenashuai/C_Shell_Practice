/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:27:32 by shujiang          #+#    #+#             */
/*   Updated: 2022/11/19 15:03:17 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 127)
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

    str1 = "~{zyw";
    str2 = "€.,";
    str3 = "";

    n1 = ft_str_is_printable(str1);
    n2 = ft_str_is_printable(str2);
    n3 = ft_str_is_printable(str3);
    printf("%d\n%d\n%d", n1, n2, n3);
    return 0;
}*/
