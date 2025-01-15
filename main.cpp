#include <iostream>
#include <vector>
#include <iomanip>
#include <chrono>

using namespace std;

void print_grid(const vector<vector<int>>& grid) {
    cout << "-------------------------" << endl;
    for (int i = 0; i < 9; i++) {
        cout << "| ";
        for (int j = 0; j < 9; j++) {
            cout << setw(2) << grid[i][j] << " ";
            if ((j + 1) % 3 == 0) cout << "| ";
        }
        cout << endl;
        if ((i + 1) % 3 == 0) cout << "-------------------------" << endl;
    }
    cout << endl;
}

bool is_valid(const vector<vector<int>>& grid, int row, int col, int num) {
    for (int x = 0; x < 9; x++)
        if (grid[row][x] == num || grid[x][col] == num)
            return false;

    int startRow = row - row % 3, startCol = col - col % 3;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (grid[i + startRow][j + startCol] == num)
                return false;

    return true;
}

bool solve_sudoku(vector<vector<int>>& grid, const vector<vector<int>>& initial_grid) {
    for (int row = 0; row < 9; row++) {
        for (int col = 0; col < 9; col++) {
            if (grid[row][col] == 0) {
                for (int num = 1; num <= 9; num++) {
                    if (is_valid(grid, row, col, num)) {
                        grid[row][col] = num;

                        if (solve_sudoku(grid, initial_grid)) {
                            return true;
                        }

                        grid[row][col] = 0;
                    }
                }
                return false;
            }
        }
    }
    return true;
}

int main() {
    vector<vector<int>> sudoku_grid = {
        {9, 0, 8, 1, 3, 0, 0, 6, 0},
        {0, 0, 0, 2, 0, 0, 0, 0, 0},
        {6, 0, 0, 0, 0, 0, 0, 0, 7},
        {0, 4, 0, 0, 0, 0, 5, 0, 0},
        {0, 0, 1, 6, 8, 0, 0, 7, 0},
        {0, 0, 0, 0, 0, 9, 0, 0, 0},
        {0, 1, 0, 3, 9, 0, 0, 0, 4},
        {0, 0, 0, 0, 0, 2, 0, 3, 0},
        {0, 0, 9, 0, 0, 7, 0, 0, 0}
    };

    vector<vector<int>> initial_grid = sudoku_grid;

    cout << "Grid Awal:\n";
    print_grid(initial_grid);

    auto start_time = chrono::high_resolution_clock::now();

    if (solve_sudoku(sudoku_grid, initial_grid)) {
        auto end_time = chrono::high_resolution_clock::now();
        auto duration = chrono::duration_cast<chrono::milliseconds>(end_time - start_time);

        cout << "Sudoku selesai!\n";
        print_grid(sudoku_grid);
        cout << "Sudoku selesai dalam " << duration.count() << " ms.\n";
    } else {
        cout << "Tidak ada solusi.\n";
    }

    return 0;
}
