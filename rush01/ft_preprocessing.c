/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_preprocessing.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbento <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 21:47:36 by lbento            #+#    #+#             */
/*   Updated: 2025/04/27 21:49:34 by lbento           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_valid_placement(int **rules, int row, int col, int num, int *matrice_int);

void	handle_clue_four(int **rules, int *matrice_int, int i)
{
	int	j;

	if (matrice_int[i] == 4)
	{
		j = 0;
		while (j < 4)
		{
			rules[j][i] = j + 1;
			j++;
		}
	}
	if (matrice_int[i + 4] == 4)
	{
		j = 0;
		while (j < 4)
		{
			rules[3 - j][i] = j + 1;
			j++;
		}
	}
}

void	handle_clue_four_row(int **rules, int *matrice_int, int i)
{
	int	j;

	if (matrice_int[i + 8] == 4)
	{
		j = 0;
		while (j < 4)
		{
			rules[i][j] = j + 1;
			j++;
		}
	}
	if (matrice_int[i + 12] == 4)
	{
		j = 0;
		while (j < 4)
		{
			rules[i][3 - j] = j + 1;
			j++;
		}
	}
}

void	handle_clue_one(int **rules, int *matrice_int, int i)
{
	if (matrice_int[i] == 1)
		rules[0][i] = 4;
	if (matrice_int[i + 4] == 1)
		rules[3][i] = 4;
	if (matrice_int[i + 8] == 1)
		rules[i][0] = 4;
	if (matrice_int[i + 12] == 1)
		rules[i][3] = 4;
}

int	check_conflicts(int **rules, int *matrice_int)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (rules[i][j] && !ft_is_valid_placement(rules, i, j, rules[i][j],
					matrice_int))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_preprocess_rules(int **rules, int *matrice_int)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		handle_clue_four(rules, matrice_int, i);
		handle_clue_four_row(rules, matrice_int, i);
		handle_clue_one(rules, matrice_int, i);
		i++;
	}
	return (check_conflicts(rules, matrice_int));
}
