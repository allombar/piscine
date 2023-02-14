/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alelomba <alelomba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 03:57:42 by alelomba          #+#    #+#             */
/*   Updated: 2023/02/12 04:08:48 by alelomba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	result = 1;
	while (nb)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}
