/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 09:58:36 by shujiang          #+#    #+#             */
/*   Updated: 2022/11/23 14:03:59 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	p;

	p = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power > 0)
	{
		p = nb * p;
		power--;
	}
	return (p);
}
/*
#include<stdio.h>
int main()
{
    int n;

    n = ft_iterative_power(2, 3);
    printf("%d", n);
    return (0);
}*/
