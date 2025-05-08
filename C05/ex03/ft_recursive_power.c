/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbento <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 17:05:05 by lbento            #+#    #+#             */
/*   Updated: 2025/05/06 14:17:30 by lbento           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power);

int	ft_recursive_power(int nb, int power)
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
	if (power >= 1)
	{
		total = nb * ft_recursive_power(nb, power - 1);
	}
	return (total);
}
// #include<stdio.h>
// int main ()
// {
// 	int result;
// 	result = ft_recursive_power(5, 2);
// 	printf("%d\n", result);
// }
