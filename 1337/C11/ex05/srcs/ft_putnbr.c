/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-makh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 09:30:01 by hel-makh          #+#    #+#             */
/*   Updated: 2021/08/07 09:30:19 by hel-makh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	mult;
	long	Lnb;
	long	RLnb;

	Lnb = nb;
	if (Lnb == 0)
	{
		ft_putchar(Lnb + '0');
		return ;
	}
	if (Lnb < 0)
	{
		Lnb = -Lnb;
		ft_putchar('-');
	}
	mult = 10000000000;
	while (mult)
	{
		RLnb = Lnb / mult;
		mult /= 10;
		if (RLnb == 0)
			continue ;
		ft_putchar(RLnb % 10 + '0');
	}
}
