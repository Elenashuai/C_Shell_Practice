/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 19:04:04 by shujiang          #+#    #+#             */
/*   Updated: 2022/11/20 14:45:41 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*start;

	start = dest;
	while (*dest)
	{
		dest++;
	}
	while (*src && (nb > 0))
	{
		*dest++ = *src++;
		nb--;
	}
	*dest = '\0';
	return (start);
}
/*
#include<stdio.h>
#include<string.h>
int main()
{
    char str1[90] = "1234";
    char str2[90] = "5678";

	//ft_strncat (str1, str2, 2);
	strncat (str1, str2, 2);
    printf ("%s", str1);
    return 0;
}*/
