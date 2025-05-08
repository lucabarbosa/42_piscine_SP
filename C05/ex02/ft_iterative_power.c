/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbento <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 15:53:33 by lbento            #+#    #+#             */
/*   Updated: 2025/05/06 14:14:30 by lbento           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	total;

	if (nb < 0 || power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else if (nb == 0 && power == 0)
		return (1);
	i = 0;
	total = 1;
	while (i < power)
	{
		total = total * nb;
	i++;
	}
	return (total);
}
// int main ()
// {
// 	int result;
// 	result = ft_iterative_power(5, 2);
// 	printf("%d\n", result);
// }
