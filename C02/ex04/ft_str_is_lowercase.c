/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 13:27:44 by shujiang          #+#    #+#             */
/*   Updated: 2022/11/19 12:14:45 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char	*str)
{
	int	i;

	i = 0;
	if (str == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include<stdio.h>
int	 main()
{
	char	*str1, *str2, *str3;
	int	n1, n2, n3;

	str1 = "asgdhfjk";
	str2 = "SQhfis&k";
	str3 = "";

	n1 = ft_str_is_lowercase(str1);
	n2 = ft_str_is_lowercase(str2);
	n3 = ft_str_is_lowercase(str3);
	printf("%d\n%d\n%d", n1, n2, n3);
	return 0;
}*/
