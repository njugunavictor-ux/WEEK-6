//3D Array
//Victor Wambugu 
//BCS-05-0074/2025

#include <stdio.h>
#include <stdlib.h>

int main() {
    int chain[3][5][10];
    int p, q, r;          
    int totalOccupied = 0;

    for (p = 0; p < 3; p++) {
        for (q = 0; q < 5; q++) {
            for (r = 0; r < 10; r++) {
                chain[p][q][r] = rand() % 2;

                if (chain[p][q][r] == 1) {
                    totalOccupied++;
                }
            }
        }
    }

    
    printf("Total occupied rooms across all branches: %d\n", totalOccupied);

    return 0;
}