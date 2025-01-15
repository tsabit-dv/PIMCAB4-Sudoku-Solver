# Sudoku Solver C++ (Versi OnlineGDB)

Repositori ini berisi implementasi *solver* Sudoku dalam bahasa C++ yang dirancang untuk dijalankan langsung di *compiler* online OnlineGDB. Kode ini menyelesaikan teka-teki Sudoku menggunakan algoritma *backtracking* yang efisien.
![Sudoku Compiler]("https://www.google.com/url?sa=i&url=https%3A%2F%2Fwww.crossword-compiler.com%2Fen%2Fhelp%2Fhtml%2Fsudokupuzzles.htm&psig=AOvVaw1uV6XaHguTcB0jCCz8omxA&ust=1737021822941000&source=images&cd=vfe&opi=89978449&ved=0CBQQjRxqFwoTCICd4tm894oDFQAAAAAdAAAAABAE")

## Fitur

*   Menyelesaikan teka-teki Sudoku 9x9.
*   Implementasi algoritma *backtracking* yang ringkas dan efisien.
*   Output ke konsol yang bersih (hanya menampilkan grid awal dan solusi akhir).
*   **Dapat dijalankan langsung di OnlineGDB tanpa perlu instalasi *compiler* lokal.**

## Cara Menggunakan di OnlineGDB

1.  Buka situs web OnlineGDB: [https://www.onlinegdb.com/](https://www.onlinegdb.com/)

2.  Salin seluruh kode C++ (`main.cpp`) dari repositori ini.

3.  Tempelkan kode tersebut ke *editor* kode di OnlineGDB.

4.  Klik tombol "Run" (ikon segitiga hijau) untuk mengkompilasi dan menjalankan kode.

5.  Output (grid Sudoku awal dan solusi akhirnya) akan ditampilkan di bagian konsol di bawah *editor* kode.

## Contoh Grid Sudoku

Kode ini menggunakan grid Sudoku berikut sebagai contoh:

5 3 0 0 7 0 0 0 0
6 0 0 1 9 5 0 0 0
0 9 8 0 0 0 0 6 0
8 0 0 0 6 0 0 0 3
4 0 0 8 0 3 0 0 1
7 0 0 0 2 0 0 0 6
0 6 0 0 0 0 2 8 0
0 0 0 4 1 9 0 0 5
0 0 0 0 8 0 0 7 9


di mana `0` merepresentasikan sel kosong.

## Struktur Kode

*   `main.cpp`: Berisi kode sumber C++ untuk *solver* Sudoku.

## Fungsi-fungsi Utama

*   `is_valid(grid, row, col, num)`: Memeriksa apakah penempatan angka `num` pada baris `row` dan kolom `col` valid.
*   `solve_sudoku(grid, initial_grid)`: Menyelesaikan teka-teki Sudoku menggunakan algoritma *backtracking*.
*   `print_grid(grid)`: Mencetak grid Sudoku ke konsol.

## Kelebihan Menggunakan OnlineGDB

*   Tidak perlu instalasi *compiler* C++ di komputer Anda.
*   Lingkungan pengembangan yang mudah diakses melalui *browser*.
*   Ideal untuk pengujian cepat dan berbagi kode.

## Kontribusi

Kontribusi dipersilakan! Jika Anda menemukan *bug* atau memiliki ide untuk perbaikan, silakan buat *issue* atau *pull request*.
