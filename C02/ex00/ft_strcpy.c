/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:21:07 by shujiang          #+#    #+#             */
/*   Updated: 2022/11/19 12:04:08 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcpy(char	*dest, char	*src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
#include<stdio.h>

int	main()
{	
	char str1[]="beepbeepboopbeep";
	char str2[]="hello";
	ft_strcpy(str2, str1);
	printf("%s", str2);
	return 0;}	
*/
