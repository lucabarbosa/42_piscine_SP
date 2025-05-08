/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbento <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 17:25:22 by lbento            #+#    #+#             */
/*   Updated: 2025/04/24 17:27:50 by lbento           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
// int main ()
// {
// 	char s[] = {"TeSt@nd0"};
// 	char s1[] = {"†"};
// 	char s2[] = {"•"};
// 	char s3[] = {"€"};
// 	int result;
// 	ft_str_is_printable(s);
// 	result = ft_str_is_printable(s);
// 	printf("%i\n", result);
// 	ft_str_is_printable(s1);
// 	result = ft_str_is_printable(s1);
// 	printf("%i\n", result);
// 	ft_str_is_printable(s2);
// 	result = ft_str_is_printable(s2);
// 	printf("%i\n", result);
// 	ft_str_is_printable(s3);
// 	result = ft_str_is_printable(s3);
// 	printf("%i\n", result);
// }
