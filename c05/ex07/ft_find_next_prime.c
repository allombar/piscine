/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelomba <alelomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 03:58:12 by alelomba          #+#    #+#             */
/*   Updated: 2023/02/12 04:49:58 by alelomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	long	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i * i <= (long) nb)
	{
		if (!(nb % i))
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!(ft_is_prime(nb)))
		nb++;
	return (nb);
}
