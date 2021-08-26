/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-makh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 18:58:57 by hel-makh          #+#    #+#             */
/*   Updated: 2021/08/22 18:58:58 by hel-makh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &*str, 1);
		str++;
	}
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

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putstr("\n");
		ft_putnbr(par[i].size);
		ft_putstr("\n");
		ft_putstr(par[i].copy);
		ft_putstr("\n");
		i ++;
	}
}
