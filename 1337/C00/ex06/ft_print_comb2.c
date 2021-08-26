/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-makh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/06 08:36:19 by hel-makh          #+#    #+#             */
/*   Updated: 2021/08/06 12:02:56 by hel-makh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_increment(char *a1, char *a2, char *b1, char *b2)
{
	*b2 += 1;
	if (*b2 > '9')
	{
		*b2 = '0';
		*b1 += 1;
	}
	if (*b1 > '9' && *b2 == '0')
	{
		*a2 += 1;
		*b1 = *a1;
		*b2 = *a2 + 1;
	}
	if (*a2 > '9' && *b1 == *a1 && *b2 > '9')
	{
		*a1 += 1;
		*a2 = '0';
		*b1 = *a1;
		*b2 = *a2 + 1;
	}
}

void	ft_mprint(char a1, char a2, char b1, char b2)
{
	ft_putchar(a1);
	ft_putchar(a2);
	ft_putchar(' ');
	ft_putchar(b1);
	ft_putchar(b2);
	if (a1 == '9' && a2 == '8')
		return ;
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb2(void)
{
	char	a1;
	char	a2;
	char	b1;
	char	b2;

	a1 = '0';
	a2 = '0';
	b1 = '0';
	b2 = '1';
	while (a1 <= '9')
	{
		if (b2 > '9')
		{
			ft_increment(&a1, &a2, &b1, &b2);
			continue ;
		}
		ft_mprint(a1, a2, b1, b2);
		ft_increment(&a1, &a2, &b1, &b2);
		if (a1 == '9' && a2 == '9')
			break ;
	}
}
