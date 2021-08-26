/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-makh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 11:40:58 by hel-makh          #+#    #+#             */
/*   Updated: 2021/08/17 11:41:01 by hel-makh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	n;

	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (nb == 1 || nb == 0 || power == 1)
		return (nb);
	i = 1;
	n = 1;
	while (i <= power)
	{
		n *= nb;
		i ++;
	}
	return (n);
}
