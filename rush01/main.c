/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbento <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 21:55:53 by lbento            #+#    #+#             */
/*   Updated: 2025/04/27 22:08:40 by lbento           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	execute(char **argv, int **rules);
int		ft_strlen(char *str);
int		ft_checknum(char *str);
int		**ft_create_rules(void);
int		*ft_parse_matrice_int(char *str);
int		ft_preprocess_rules(int **rules, int *matrice_int);
int		ft_solve_rules(int **rules, int *matrice_int);
void	ft_print_rules(int **rules);
void	ft_free_memory(int **rules);
void	ft_putchar(char c);

int	main(int argc, char *argv[])
{
	int	**rules;

	rules = NULL;
	if (argc != 2)
	{
		write(1, "Error args\n", 11);
		return (0);
	}
	execute(argv, rules);
	return (0);
}

void	execute(char **argv, int **rules)
{
	int	*matrice_int;

	if (ft_strlen(argv[1]) <= 31 && ft_checknum(argv[1]))
	{
		rules = ft_create_rules();
		if (rules != NULL)
		{
			matrice_int = ft_parse_matrice_int(argv[1]);
			if (ft_preprocess_rules(rules, matrice_int)
				&& ft_solve_rules(rules, matrice_int))
				ft_print_rules(rules);
			else
				write(1, "No solution exists\n", 19);
			ft_free_memory(rules);
			free(matrice_int);
		}
	}
	else
		write(1, "Invalid input: 16 numbers (1-4) expected\n", 40);
}
