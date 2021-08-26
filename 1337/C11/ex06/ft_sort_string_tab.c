/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hel-makh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 14:58:42 by hel-makh          #+#    #+#             */
/*   Updated: 2021/08/25 14:58:44 by hel-makh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	ft_swap_str(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	ft_sort_string_tab(char **tab)
{
	int		i;
	int		j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[j + 1])
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
				ft_swap_str(&tab[j], &tab[j + 1]);
			j ++;
		}
		i ++;
	}
}
