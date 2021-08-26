/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-makh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 18:49:14 by hel-makh          #+#    #+#             */
/*   Updated: 2021/08/25 18:49:15 by hel-makh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int(*f)(int))
{
	int	i;
	int	*m_tab;

	m_tab = malloc (length * sizeof(int));
	if (m_tab == NULL)
		return (0);
	i = 0;
	while (i < length)
	{
		m_tab[i] = f(tab[i]);
		i ++;
	}
	return (m_tab);
}
