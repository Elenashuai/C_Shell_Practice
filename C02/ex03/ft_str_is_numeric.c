/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:57:24 by shujiang          #+#    #+#             */
/*   Updated: 2022/11/19 12:13:46 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char	*str)
{
	int	i;

	i = 0;
	if (str == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*
#include<stdio.h>
int	main()
{
	char *str1, *str2, *str3;
	int n1, n2, n3;

	str1 = "12345";
	str2 = "124&s7";
	str3 = "";
	n1 = ft_str_is_numeric(str1);
	n2 = ft_str_is_numeric(str2);
	n3 = ft_str_is_numeric(str3);	
	printf("%d\n%d\n%d\n", n1, n2, n3);
	return 0;
}
*/
