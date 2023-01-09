/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 14:18:44 by shujiang          #+#    #+#             */
/*   Updated: 2022/11/23 12:33:27 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	f;

	i = 1;
	f = nb;
	if (nb >= 0)
	{	
		if (nb == 0 || nb == 1)
			return (1);
		while (nb > 1)
		{
			f = f * (nb - i);
			if (nb - i == 1)
				return (f);
			i++;
		}
	}
	return (0);
}
/*
#include<stdio.h>
int	main()
{
	int n;

    n = ft_iterative_factorial(1);
	printf("%d", n);
	return (0);
}
*/
