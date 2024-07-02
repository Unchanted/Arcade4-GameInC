#include "sudoku.h"

int main()
{
  int ** puzzle;

  puzzle = createPuzzle();
  createPuzzle(puzzle);

  return 0;
}
