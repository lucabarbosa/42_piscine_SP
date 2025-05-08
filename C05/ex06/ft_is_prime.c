/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbento <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 16:51:07 by lbento            #+#    #+#             */
/*   Updated: 2025/05/05 17:22:01 by lbento           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	x;

	if (nb <= 1)
	{
		return (0);
	}
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	x = 3;
	while (x * x <= nb)
	{
		if (nb % x == 0)
			return (0);
		x += 2;
	}
	return (1);
}
//int main()
//{
//	int result;
//	result = ft_is_prime(37);
//	printf("%i\n", result);
//}
