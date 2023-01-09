/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:08:23 by shujiang          #+#    #+#             */
/*   Updated: 2022/11/12 18:13:37 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letter;

	letter = 'z';
	while (letter != 'a')
	{
		write (1, &letter, 1);
		letter--;
	}
	letter = 'a';
	write (1, &letter, 1);
}

/*int main ()
{
	char letter = 'z';
	ft_print_reverse_alphabet();
	return 0;
}*/
