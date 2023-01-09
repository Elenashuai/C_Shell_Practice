/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 09:21:28 by shujiang          #+#    #+#             */
/*   Updated: 2022/11/13 16:17:50 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	display;

	if (n < 0)
	{
		display = 'N';
		write (1, &display, 1);
	}
	else
	{
		display = 'P';
		write (1, &display, 1);
	}
}
/*int main (){

	ft_is_negative(-2);
	return(0);
}
*/
