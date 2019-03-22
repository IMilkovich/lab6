#include <iostream>

int main() {
    int matrix[5][5];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            matrix[i][j] = rand();
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }

    int i_min = 0, j_min = 0, i_max = 0, j_max = 0;
    int min = matrix[0][0], max = matrix[0][0];

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (min > matrix[i][j]) {
                min = matrix[i][j];
                i_min = i;
                j_min = j;
            }
            if (max < matrix[i][j]) {
                max = matrix[i][j];
                i_max = i;
                j_max = j;
            }
        }
    }

    int buff = min;
    matrix[i_min][j_min] = max;
    matrix[i_max][j_max] = buff;

    std::cout << "\n";
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << "\n";
    }

    return 0;
}