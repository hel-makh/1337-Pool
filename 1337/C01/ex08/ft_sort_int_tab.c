/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-makh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/08 06:45:02 by hel-makh          #+#    #+#             */
/*   Updated: 2021/08/08 06:45:04 by hel-makh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tsize;

	i = 0;
	tsize = size - 1;
	while (i <= size)
	{
		j = 0;
		while (j < tsize)
		{
			if (*&tab[j] > *&tab[j + 1])
				ft_swap(&tab[j], &tab[j + 1]);
			j ++;
		}
		i ++;
	}
}
