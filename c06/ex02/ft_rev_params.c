/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelomba <alelomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 05:01:46 by alelomba          #+#    #+#             */
/*   Updated: 2023/02/12 05:18:13 by alelomba         ###   ########.fr       */
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

int	main(int ac, char **av)
{
	int	i;

	i = ac - 1;
	while (i >= 1)
	{
		ft_putstr(av[i]);
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
