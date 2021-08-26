/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-makh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 11:41:36 by hel-makh          #+#    #+#             */
/*   Updated: 2021/08/17 11:41:38 by hel-makh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb == 0 || nb == 1)
		return (nb);
	i = 0;
	while (i * i <= nb)
	{
		if (i > 46340)
			return (0);
		if (i * i == nb)
			return (i);
		i ++;
	}
	return (0);
}