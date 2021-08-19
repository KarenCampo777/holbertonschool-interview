#include "sandpiles.h"
#include <stdio.h>

/**
 * grid_sum - the sum of grids
 * @grid1: the frist grid
 * @grid2 - the second grid
 */

void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
    int i;
    int j;

     for (i = 0; i < 3; i++)
     {
         for (j = 0; j < 3; j++)
         {
             grid1[i][j] = grid1[i][j] + grid2[i][j];
         }
     }
}
 