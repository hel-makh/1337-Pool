/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-makh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 09:28:49 by hel-makh          #+#    #+#             */
/*   Updated: 2021/08/25 09:28:50 by hel-makh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			n ++;
		i ++;
	}
	return (n);
}
