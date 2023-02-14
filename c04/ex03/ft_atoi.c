/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelomba <alelomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:33:00 by alelomba          #+#    #+#             */
/*   Updated: 2023/02/12 03:42:16 by alelomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	m;
	int	total;

	i = 0;
	total = 0;
	m = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			m = -m;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		total = total * 10 + (str[i] - '0') * m;
		i++;
	}
	return (total);
}
