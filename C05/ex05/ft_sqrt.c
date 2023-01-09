/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 11:25:08 by shujiang          #+#    #+#             */
/*   Updated: 2022/11/23 12:44:49 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	while (i * i < nb && i < 46340)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}
/*
#include<stdio.h>
int main()
{
    int n;

    n = ft_sqrt(121);
    printf("%d", n);
    return (0);
}*/
