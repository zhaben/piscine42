/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzle.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbennett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/14 16:23:31 by zbennett          #+#    #+#             */
/*   Updated: 2018/07/14 23:36:00 by zbennett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "sudoku.h"

int** createPuzzle()
{
	int** puzzle;
	int i, j;
	int array[9][9] = {}; //9 rows of 9 numbers, 81 spaces
	
	//Need to allocate memory
	puzzle = (int**)malloc(9 * sizeof(int*)); //allocate space of 9 arrays of integers. 36 bytes

	for (i = 0; i < 9; i++)		//look through each orray if integers
	{
		puzzle[i] = (int*)malloc(9 * sizeof(int)); 	//allocate 9 spaces for each array, 324 bytes

		for(j = 0; j <9; j++)
		{
			for (j = 0; j < 9; j++)
			{
				puzzle[i][j] = array[i][j];	//copy everything in array into puzzle
			}
		}
	}
	return puzzle;	//can't return array, because the memory in array is not dynamically allocated
}

void	printPuzzle(int** puzzle)
{
	int i;
	int j;
	
	printf("-------------------------------- \n");
	for (i = 0; i < 9; i++)			//for each of the 9 elements in puzzle[i]
	{
		for(j = 0; j < 9; j++)		//for the 9 numbers ([j]) of each element in puzzle[i][j]
		{
			printf(" %d ", puzzle[i][j]);	//print the jth element of the ith element
			if (((j + 1) % 3) == 0)			//if at the 3rd[2], 6th[5], or 9th[8] element, print a wall
			{
				printf("%c", '|');
			}
		}
		printf("\n");
		if ((i + 1) % 3 == 0)		//every 3 lines, print 
		{
			printf("-------------------------------\n");
		}
	}	
}

int		main(int argc, char **argv)
{
	int		grid[9][9];
	int i;
	int j;

	i = 0;
	while (i <= 9)
		j = 0
		{
			while {j <= 9)
			if (argv[i][j] == '.')
				grid[i][j] = 0;
			else
				grid[i][j] = argv[i + 1][j] - '0';
			j++;
		}

