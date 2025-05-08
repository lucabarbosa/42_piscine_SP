/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbento <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 12:55:39 by lbento            #+#    #+#             */
/*   Updated: 2025/04/24 12:56:18 by lbento           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
// int main ()
// {
// 	char s[] = {"teste"};
// 	char s1[] = {"teSte"};
// 	char s2[] = {"test!"};
// 	char s3[] = {"téste"};
// 	int result;
// 	ft_str_is_lowercase(s);
// 	result = ft_str_is_lowercase(s);
// 	printf("%i\n", result);
// 	ft_str_is_lowercase(s1);
// 	result = ft_str_is_lowercase(s1);
// 	printf("%i\n", result);
// 	ft_str_is_lowercase(s2);
// 	result = ft_str_is_lowercase(s2);
// 	printf("%i\n", result);
// 	ft_str_is_lowercase(s3);
// 	result = ft_str_is_lowercase(s3);
// 	printf("%i\n", result);
// }
