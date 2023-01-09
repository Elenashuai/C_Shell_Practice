/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:13:16 by shujiang          #+#    #+#             */
/*   Updated: 2022/11/23 14:27:46 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (nb % i > 0)
		i++;
	if (nb % i == 0 && nb != i)
		return (0);
	else
		return (1);
}
/*
#include<stdio.h>
int main()
{
    int n;

    n = ft_is_prime(211);
    printf("%d", n);
    return (0);
}*/
