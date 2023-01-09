/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 09:22:48 by shujiang          #+#    #+#             */
/*   Updated: 2022/11/20 11:41:13 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < size)
	{
		*dest = *src;
		i++;
	}
	if (i <= size)
		*dest = '\0';
	return (i);
}
/*
#include<stdio.h>
#include<string.h>
int main()
{	
	int len;
    char str1[]="gdjuw";
    char str2[]="hello";
//	len = strlcpy(str2, str1, 6);
   	len = ft_strlcpy(str2, str1, 6);
	printf("%d", len);
    return 0;
}*/
