#include <iostream>
#include <vector>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    
    int one, two;
    cout << "Введите количество строк: ";
    cin >> one;
    cout << "Введите количество столбцов: ";
    cin >> two;

    
    vector<vector<double>> massiv(one, vector<double>(two));

    
    cout << "Введите элементы массива:\n";
    for (int i = 0; i < one; ++i) {
        for (int j = 0; j < two; ++j) {
            cout << "Введите элемент [" << i << "][" << j << "]: ";
            cin >> massiv[i][j];
        }
    }

    cout << "\nВведенный массив:\n";
    for (int i = 0; i < one; ++i) {
        for (int j = 0; j < two; ++j) {
            cout << massiv[i][j] << " ";
        }
        cout << endl;
    }

    double summ = one + two / (one * two);
    cout << "Среднее арифметическое: " << summ << endl;

    return 0;
}


