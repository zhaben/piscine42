#include	"sudoku.h"

int** createPuzzle();

int main()
{
	int** puzzle;

	puzzle = createPuzzle();
	printPuzzle(puzzle);

	return (0);
}
