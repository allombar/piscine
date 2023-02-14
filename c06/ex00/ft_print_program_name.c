/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelomba <alelomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 04:53:29 by alelomba          #+#    #+#             */
/*   Updated: 2023/02/12 04:57:54 by alelomba         ###   ########.fr       */
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
	ft_putstr(av[0]);
	write(1, "\n", 1);
	return (0);
}
