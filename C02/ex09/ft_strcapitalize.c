/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 16:56:58 by shujiang          #+#    #+#             */
/*   Updated: 2022/11/19 16:44:10 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_alllowcase(char *str)
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

char	*ft_capitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str [i] > 'z')
			&& (str[i] < 'A' || str [i] > 'Z')
			&& (str[i] < '0' || str[i] > '9'))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_alllowcase(str);
	ft_capitalize(str);
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str [i] <= '9')
		{
			if (str[i + 1] >= 'A' && str[i + 1] <= 'Z')
			{
				str[i + 1] = str[i + 1] + 32;
			}
		}
		i++;
	}
	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	return (str);
}
/*
#include<stdio.h>

int  main()
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char str2[] = "R^R}MJp%Ctvl}B*F}-,LqnT8H_";
    ft_strcapitalize(str);
	ft_strcapitalize(str2);
    printf("%s\n", str);
	printf("%s", str2);
    return 0;
}*/
