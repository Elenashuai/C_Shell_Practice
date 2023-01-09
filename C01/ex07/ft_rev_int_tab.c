/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 09:55:24 by shujiang          #+#    #+#             */
/*   Updated: 2022/11/14 12:25:39 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	c;
	int	i;

	i = 0;
	while (i <= (size / 2 + size % 2) - 1)
	{
		c = *(tab + i);
		*(tab + i) = *(tab + size - 1 - i);
		*(tab + size - 1 - i) = c;
		i++;
	}
}

/*#include<stdio.h>

int main()
{
	int arr[]={1,3,5,7,9,6,3};
	int *ptr_arr;
	int i;

	ptr_arr=arr;
	ft_rev_int_tab(ptr_arr, 7);
	for (i=0;i<7;i++)
	{
		printf("%d, ",arr[i]);
	}

	return 0;
} */
