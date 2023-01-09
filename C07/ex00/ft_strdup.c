/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:58:50 by shujiang          #+#    #+#             */
/*   Updated: 2022/11/24 20:05:51 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*ptr_cpy;
	int	i;
	
	if (!(ptr_cpy = malloc(sizeof(*ptr_cpy) * ft_strlen(src) + 1)))
		return (NULL);
	else
	{
		i = 0;
		while (src[i] != '\0' && i <= ft_strlen(src))
		{
			ptr_cpy[i] = src[i];
			i++;
		}
		ptr_cpy[i] = '\0';
	}
	return (ptr_cpy);
}
/*
int	main(int	argc, char* argv[])
{
	char *original;
	char *mine;
	
	if	(argc == 2)
	{
		original = strdup(argv[1]);
		mine = ft_strdup(argv[1]);
		printf(":%s:\n:%s:\n", original, mine);
	}
	return (0);
}
*/






