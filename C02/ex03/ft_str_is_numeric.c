/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbento <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 12:23:22 by lbento            #+#    #+#             */
/*   Updated: 2025/04/28 15:28:12 by lbento           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
//int main ()
//{
//	char n[] = {"41846"};
//	char n1[] = {"4K4"};
//	int result;
//	ft_str_is_numeric(n);
//	result = ft_str_is_numeric(n);
//	printf("%i\n", result);
//	ft_str_is_numeric(n1);
//	result = ft_str_is_numeric(n1);
//	printf("%i\n", result);
//}
