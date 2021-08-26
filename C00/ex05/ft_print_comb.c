/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-makh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 07:59:20 by hel-makh          #+#    #+#             */
/*   Updated: 2021/08/06 07:59:34 by hel-makh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_mprint(int a, int b, int c)
{
	if (((a * 100 + b * 10 + c) > (c * 100 + b * 10 + a)))
		return ;
	if ((b * 10 + c) > (c * 10 + b))
		return ;
	if (b < a)
		return ;
	if (a == b || a == c || b == c)
		return ;
	ft_putchar(a + '0');
	ft_putchar(b + '0');
	ft_putchar(c + '0');
	if (a == 7 && b == 8 && c == 9)
		return ;
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	int	n1;
	int	n2;
	int	n3;

	n1 = 0;
	n2 = 0;
	n3 = 0;
	while (n1 <= 7)
	{
		ft_mprint(n1, n2, n3);
		n3++;
		if (n3 == 10)
		{
			n3 = 0;
			n2++;
		}
		if (n2 == 10 && n3 == 0)
		{
			n3 = 0;
			n2 = 0;
			n1++;
		}
	}
}
