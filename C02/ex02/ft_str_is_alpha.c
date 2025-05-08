/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbento <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 11:53:21 by lbento            #+#    #+#             */
/*   Updated: 2025/04/24 11:54:41 by lbento           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}
// int	main()
// {
// 	int result;
// 	char s[] = {"String"};
// 	char s1[] = {""};
// 	char s2[] = {"Str1ng"};
// 	char s3[] = {","};
// 	char s4[] = {"TÉSTÉ"};

// 	ft_str_is_alpha(s);
// 	result = ft_str_is_alpha(s);
// 	printf("%i\n", result);

// 	ft_str_is_alpha(s1);
// 	result = ft_str_is_alpha(s1);
// 	printf("%i\n", result);

// 	ft_str_is_alpha(s2);
// 	result = ft_str_is_alpha(s2);
// 	printf("%i\n", result);

// 	ft_str_is_alpha(s3);
// 	result = ft_str_is_alpha(s3);
// 	printf("%i\n", result);

// 	ft_str_is_alpha(s4);
// 	result = ft_str_is_alpha(s4);
// 	printf("%i\n", result);
// }
