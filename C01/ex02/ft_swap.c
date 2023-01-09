/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 08:41:11 by shujiang          #+#    #+#             */
/*   Updated: 2022/11/12 17:29:11 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a,	int	*b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/*
#include<stdio.h>
int main ()
{
	int *a, *b;
	int x, y;

	x = 1;
	y = 2;
	a = &x;
	b = &y;

	printf("before:%d,%d\n", x,y);
	ft_swap(a,b);
	printf("after:%d,%d", x, y);
	return 0;
}
*/
