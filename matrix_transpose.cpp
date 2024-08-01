#include <iostream>
#include <vector>

using namespace std;

void readMatrix(vector<vector<int>>& matrix, int rows, int cols) {
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (const auto& elem : row) {
            cout << elem << " ";
        }
        cout << endl;
    }
}

void transposeMatrix(const vector<vector<int>>& matrix, vector<vector<int>>& transposed, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int rows, cols;

    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> rows >> cols;

    
    vector<vector<int>> matrix(rows, vector<int>(cols));
    vector<vector<int>> transposed(cols, vector<int>(rows));

    
    readMatrix(matrix, rows, cols);

    
    cout << "\nOriginal Matrix:" << endl;
    printMatrix(matrix);

    
    transposeMatrix(matrix, transposed, rows, cols);

    
    cout << "\nTransposed Matrix:" << endl;
    printMatrix(transposed);

    return 0;
}
