/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:06:38 by shujiang          #+#    #+#             */
/*   Updated: 2022/11/12 18:20:49 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c != 'z')
	{
		write (1, &c, 1);
		c++;
	}
	c = 'z';
	write (1, &c, 1);
}
/*int main ()
{
	char c;

	c = 'a';
	ft_print_alphabet();
	return 0;
}
*/
