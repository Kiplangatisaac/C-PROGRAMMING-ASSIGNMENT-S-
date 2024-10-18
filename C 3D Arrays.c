// Arrays in c - 3D Arrays
/*Author:Isaac
Date:15/10/24*/
#include <stdio.h>

int main() {
    
    int details[3][3][3] = {
        { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} },
        { {10, 11, 12}, {13, 14, 15}, {16, 17, 18} },
        { {19, 20, 21}, {22, 23, 24}, {25, 26, 27} }
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                printf("details[%d][%d][%d] = %d\n", i, j, k, details[i][j][k]);
            }
        }
    }

    return 0;
}
