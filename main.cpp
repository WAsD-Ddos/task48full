#include "maint.h"

string matrix_chet(int** matrix, int N, int M);




string matrix_to_string(int** matrix, int N, int M) {
    string res =  " ";
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            res += to_string(matrix[i][j]) + " ";
        }
        res+= "\n";
    }
    return res;
}

int main() {
    int N, M;

    cout << "enter (N): ";
    cin >> N;
    cout << "enter (M): ";
    cin >> M;

    
    int** matrix = new int* [N];
    for (int i = 0; i < N; ++i) {
        matrix[i] = new int[M];
    }

    
    cout << "enter element matrix:\n";
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            cin >> matrix[i][j];
        }
    }

    

    cout <<"column with chet elements: " << matrix_chet(matrix, N, M) << endl;

    
    for (int i = 0; i < N; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}