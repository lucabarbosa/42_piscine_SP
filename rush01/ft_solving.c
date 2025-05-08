/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solving.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbento <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 22:17:15 by lbento            #+#    #+#             */
/*   Updated: 2025/04/27 22:17:33 by lbento           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_valid_placement(int **rules, int row, int col, int num, int *matrice_int);
int	ft_check_row_matrice_int(int **rules, int row, int *matrice_int);
int	ft_check_col_matrice_int(int **rules, int col, int *matrice_int);

int	ft_solve_rules(int **rules, int *matrice_int)
{
	int	row;
	int col;
	int num;
	int found_empty;

	found_empty = 0;
	// Procura espaco vazio na matriz
	row = 0;
	while (row < 4 && !found_empty)
	{
        col = 0;
        while (col < 4 && !found_empty)
		{
            if (rules[row][col] == 0)
			{
				found_empty = 1;
			}
			else
			{
			col++;
			}
		}
	if(!found_empty)
	row++;
	}
	if (!found_empty)
		return (1);


	//-----------



	num = 1;
	while (num <= 4)
	{
		if (ft_is_valid_placement(rules, row, col, num, matrice_int))
		{
			rules[row][col] = num;
			if (ft_solve_rules(rules, matrice_int))
				return (1);
			rules[row][col] = 0;
		}
	num++;
	}
	return (0);
}

int	ft_is_valid_placement(int **rules, int row, int col, int num, int *matrice_int)
{
	int i;
	// Conferindo linhas e colunas duplicadas
	i = 0;
	while (i < 4)
	{
		if (rules[row][i] == num && i != col)
			return (0);
		if (rules[i][col] == num && i != row)
			return (0);
	i++;
	}
	// Temporariamente preenchendo os numeros.


	int original;
	original = rules[row][col];
	rules[row][col] = num;


	// Confira a matriz_int para a linha e a coluna afetadas

	int valid
	valid = ft_check_row_matrice_int(rules, row, matrice_int) && ft_check_col_matrice_int(rules, col, matrice_int);
	rules[row][col] = original;
	return (valid);
}
