/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 12:59:52 by shujiang          #+#    #+#             */
/*   Updated: 2022/11/24 19:47:41 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int *arr;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	else if (!(arr = malloc(sizeof(int) * (max - min))))
		return (-1);
	else
	{
		i = 0;
		while (min < max)
		{
			arr[i] = min;
			i++;
			min++;
		}
		range = &arr;
		return (i);
	}
}
/*
int	main(void)
{
	int *arr = NULL;
	int	min;
	int max;

	min = 2;
	max = 99;
	ft_ultimate_range(&arr, min, max);
	while (min < max)
	{
		printf("%d", min);;
		if(min != max -1)
			printf("%s", ", ");
		min++;
	}
	return (0);
}*/
