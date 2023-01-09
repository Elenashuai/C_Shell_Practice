/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 12:12:27 by shujiang          #+#    #+#             */
/*   Updated: 2022/11/12 17:51:02 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		++i;
	}
	return (i);
}

/*
#include<stdio.h>
int main ()
{
	char str[] = "bibibubi";
	int n;
	n = ft_strlen(str);
	printf("%d", n);
	return 0;
}
*/
