/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 09:16:16 by shujiang          #+#    #+#             */
/*   Updated: 2022/11/12 18:42:34 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_number(int a)
{
	ft_putchar((a / 10) + '0');
	ft_putchar((a % 10) + '0');
}

void	ft_print_ab(int a, int b)
{
	ft_print_number(a);
	ft_putchar(' ');
	ft_print_number(b);
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a < 98)
	{
		while (b < 100)
		{
			ft_print_ab(a, b);
			++b;
		}
		if (a != 98)
		{
			++a;
			b = a + 1;
		}
	}	
	if ((a == 98) && (b == 99))
	{
		ft_print_number(a);
		ft_putchar(' ');
		ft_print_number(b);
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return(0);
}*/
