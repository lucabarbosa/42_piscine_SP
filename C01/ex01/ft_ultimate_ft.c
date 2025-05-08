/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbento <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:01:16 by lbento            #+#    #+#             */
/*   Updated: 2025/04/22 13:01:23 by lbento           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
int main ()
{
	int n =1;
	int *ponteiro1;
	int **ponteiro2;
	int ***ponteiro3;
	int ****ponteiro4;
	int *****ponteiro5;
	int ******ponteiro6;
	int *******ponteiro7;
	int ********ponteiro8;
	int *********ponteiro9;
	ponteiro1 = &n;
	ponteiro2 = &ponteiro1;
	ponteiro3 = &ponteiro2;
	ponteiro4 = &ponteiro3;
	ponteiro5 = &ponteiro4;
	ponteiro6 = &ponteiro5;
	ponteiro7 = &ponteiro6;
	ponteiro8 = &ponteiro7;
	ponteiro9 = &ponteiro8;
	printf("%d\n", n);
	ft_ultimate_ft(ponteiro9);
	printf("%d\n", n);
}
