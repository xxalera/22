#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

int main()
{
    SetConsoleCP(125);
    SetConsoleOutputCP(1251);
    setlocale(0, "");

    srand(time(NULL));

    int N;

    cout << "Enter the size of the array: ";
    cin >> N;

    int** matrix;

    matrix = new int* [N];
    for (int i = 0; i < N; i++) {
        matrix[i] = new int[N];
    }

    int sum = 0;

    cout << endl << "Your array: " << endl;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matrix[i][j] = rand() % 10;
            cout << matrix[i][j] << " ";

            if (i == j) {
                sum += matrix[i][j];
            }
        }
        cout << endl;
    }

    cout << endl << "The sum of the main diagonal of the array: " << sum << endl;

    for (int i = 0; i < N; i++) {
        delete[] matrix[i];
    }

    delete[] matrix;
}