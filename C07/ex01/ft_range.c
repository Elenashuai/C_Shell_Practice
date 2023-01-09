/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 19:40:39 by shujiang          #+#    #+#             */
/*   Updated: 2022/11/23 21:13:21 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int	*ft_range(int min, int max)
{
	int *ptr_arr_ints;
	int	i;
	int j;

	if (min >= max)
		return (NULL);
	else
	{
		if (!(ptr_arr_ints = malloc(sizeof(*ft_range) * (max -min))))
					return (NULL);
		else
		{
			i = 0;
			j = min;
			while (i < (max - min))
			{
				ptr_arr_ints[i] = j;
				i++;
				j++;
			}
		}
	}
	return (ptr_arr_ints);
}
/*
int	main()
{
	int	i;
	int* test;
	
	test = ft_range(2, 100);
	i = 0;
	while (test[i] !='\0')
	{
		printf("%d", test[i]);
		i++;
		if (test[i] !='\0')
			printf("%s", ", ");
	}
	return (0);
}*/					
