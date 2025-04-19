#include "maint.h"


bool isColumnEven(int** matrix, int col, int size) {
    for (int i = 0; i < size; ++i) {
        if (matrix[col][i] % 2 != 0) {
            return false;
        }
    }
    return true;
}

string matrix_chet(int** matrix, int N, int M) {
    string res = " ";
    for (int i = 0; i < N; ++i) {
        if (isColumnEven(matrix, i, M)) {     
            res += to_string(i + 1)+" ";
        }
    }
    return res;
}