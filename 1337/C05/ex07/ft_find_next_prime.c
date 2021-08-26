/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-makh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 11:41:57 by hel-makh          #+#    #+#             */
/*   Updated: 2021/08/17 11:42:00 by hel-makh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;
	int	p_nb;

	if (nb-- <= 2)
		return (2);
	while (++nb < 2147483647)
	{
		i = 1;
		while (++i <= nb)
		{
			if (nb != i)
			{
				if (nb % i == 0)
				{
					i = nb;
					p_nb = 0;
				}
				else
					p_nb = 1;
			}
		}
		if (p_nb)
			break ;
	}
	return (nb);
}
