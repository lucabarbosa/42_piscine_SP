/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbento <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 19:09:38 by lbento            #+#    #+#             */
/*   Updated: 2025/05/05 17:22:42 by lbento           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fat;

	if (nb == 1 || nb == 0)
		return (1);
	else if (nb < 0)
	{
		return (0);
	}
	fat = 1;
	while (nb > 0)
	{
		fat = fat * (nb);
		nb--;
	}
	return (fat);
}
// int main ()
// {
// 	int result;
// 	result = ft_iterative_factorial(2);
// 	printf("%i\n", result);
// 	return (0);
// }
