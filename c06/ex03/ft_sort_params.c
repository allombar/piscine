/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelomba <alelomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 05:05:25 by alelomba          #+#    #+#             */
/*   Updated: 2023/02/13 07:58:24 by alelomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i] != '\0')
			i++;
		write(1, str, i);
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	if (!s1 && !s2)
		return (0);
	if (!s1)
		return (-s2[i]);
	if (!s2)
		return (s1[i]);
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	bubble_sort(char **tab, int ac)
{
	int		i;
	int		j;
	char	*tmp;

	i = 1;
	while (i < ac - 1)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_strcmp(tab[j], tab[i]) < 0)
			{
				tnp = tab[j];
				tab[j] = tab[i];
				tab[i] = tmp;
			}
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	bubble_sort(av, ac);
	while (i < ac)
	{
		ft_putstr(av[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
