/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 09:21:57 by shujiang          #+#    #+#             */
/*   Updated: 2022/11/12 17:36:04 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include<stdio.h>
int main ()
{
	int	a;
	int b;
   	int div;
	int mod;

	a = 5;
	b = 3;
	ft_div_mod(a, b, &div, &mod);
	printf("div result is %d, mod result is %d", div, mod);
	return 0;
}*/
