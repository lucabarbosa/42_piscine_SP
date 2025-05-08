/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbento <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 12:50:12 by lbento            #+#    #+#             */
/*   Updated: 2025/04/22 12:50:18 by lbento           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
// int	main()
// {
// 	int n1;
// 	int n2;
// 	int *ptr1;
// 	int *ptr2;

// 	n1 =20;
// 	n2 = 50;
// 	printf("%d\n", n1);
// 	printf("%d\n", n2);
// 	printf("\n\n");
// 	ptr1 = &n1;
// 	ptr2 = &n2;
// 	ft_swap(ptr1, ptr2);
// 	printf("%d\n", n1);
// 	printf("%d\n", n2);
// }