/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:01:14 by shujiang          #+#    #+#             */
/*   Updated: 2022/11/14 12:29:54 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_compare_swap(int *tab1, int *tab2)
{
	int	c;

	if (*tab1 > *tab2)
	{
		c = *tab1;
		*tab1 = *tab2;
		*tab2 = c;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	n;
	int	i;

	n = 0;
	i = 1;
	while (i < size)
	{
		ft_compare_swap((tab + n), (tab + i));
		i++;
		if (i == size)
		{
			n++;
			i = n + 1;
		}
	}
}

/*#include<stdio.h>

int main ()
{
	int arr[ ] = {6, 5, 9, 4, 2, 7, 4, 3};
	int *ptr_arr;
	int i;
	
	i = 0;
	ptr_arr = arr;
	ft_sort_int_tab(ptr_arr, 8);
	while (i < 7)
	{
		printf("%d, ", *(ptr_arr + i));
		i++;
	}
	if (i == 7)
	{
		printf("%d", *(ptr_arr+7));
	}
	return 0;
} */		
