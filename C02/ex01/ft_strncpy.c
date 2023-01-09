/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 09:56:54 by shujiang          #+#    #+#             */
/*   Updated: 2022/11/20 11:43:30 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char	*dest, char	*src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*(src + i) != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
#include<stdio.h>
int	main()
{
	char	str1[] = "beepbeepboopbeep";
	char	str2[] = "hello";
	
	//ft_strncpy(str2, str1, 4);
	strncpy(str2, str1, 4);
	printf("%s", str2);
	return 0;
}*/
