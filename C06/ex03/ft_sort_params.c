/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-makh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 06:51:53 by hel-makh          #+#    #+#             */
/*   Updated: 2021/08/17 13:09:43 by hel-makh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &*str, 1);
		str++;
	}
}

void	ft_swap_str(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int				i;
	unsigned char	s1i;
	unsigned char	s2i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		s1i = s1[i];
		s2i = s2[i];
		if (s1i != s2i)
			return (s1i - s2i);
		i ++;
	}
	return (0);
}

void	ft_sort_str_tab(char *tab[], int size)
{
	int		i;
	int		j;

	i = 0;
	while (i <= size)
	{
		j = 0;
		while (j < size - 1)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
				ft_swap_str(&tab[j], &tab[j + 1]);
			j ++;
		}
		i ++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	if (argc <= 1)
		return (0);
	i = 0;
	while (i < argc - 1)
	{
		ft_swap_str(&argv[i], &argv[i + 1]);
		i ++;
	}
	ft_sort_str_tab(argv, argc - 1);
	i = 0;
	while (i < argc - 1)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i ++;
	}
	return (0);
}
