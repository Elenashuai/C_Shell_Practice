/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shujiang <shujiang@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 09:45:35 by shujiang          #+#    #+#             */
/*   Updated: 2022/11/12 18:34:45 by shujiang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print(int x, int y, int z)
{
	ft_putchar(x);
	ft_putchar(y);
	ft_putchar(z);
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print2(int x, int y, int z)
{
	ft_putchar(x);
	ft_putchar(y);
	ft_putchar(z);
}

void	ft_print_comb(void)
{	
	int	x;
	int	y;
	int	z;

	x = '0';
	y = '1';
	z = '2';
	while (x < '7')
	{
		while (y <= '8')
		{
			while (z <= '9')
			{
				ft_print(x, y, z);
				z++;
			}
			y++;
			z = y + 1;
		}
		x++;
		y = x + 1;
		z = y + 1;
	}
	ft_print2(x, y, z);
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
