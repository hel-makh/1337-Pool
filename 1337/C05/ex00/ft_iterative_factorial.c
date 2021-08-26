/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-makh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 11:40:31 by hel-makh          #+#    #+#             */
/*   Updated: 2021/08/17 11:40:40 by hel-makh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	if (nb < 0 || nb > 25)
		return (0);
	if (nb == 0)
		return (1);
	i = nb;
	while (i > 1)
	{
		nb *= i - 1;
		i --;
	}
	return (nb);
}
