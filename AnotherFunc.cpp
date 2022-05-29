// Интересный собеседник: программа, которая НИКОГДА не поддержит ваш разговор.
#include <iostream>
#include <random>
using namespace std;

const int n = 8;

int Rand() {
           int a = rand() % 2;
    return a;
}

bool Win(int a[][n]) {
    int k=0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] = 1) k++;
        }
    }
    if (k == 25) return true;
    else return false;
}

int main()
{
    setlocale(LC_ALL, "rus");
    int a[n][n];
    random_device rand;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j]=Rand();
        }
    }
    cout << "Сделай из нулевой матрицы единичную!"<<endl<<
        "Для этого укажи на элемент, который ты меняешь."<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j]<<" ";
        }
        cout << endl;
    }
    while (Win(a) == true) {
        int str, sto;
        cout << "Укажи расположение изменяемого элемента.\nВведи его расположение в строке:\n";
        cin >> str; 
        cout << "Введи его расположение в столбце: \n";
        cin >> sto;
        if (str >= 0 && str < n && sto >= 0 && sto < n) {
            if (a[str][sto] == 1) {
                a[str][sto] = 0;
            }
            else {
                a[str][sto] = 1;
            }
            cout << "Изменённая матрица: \n";
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    cout << a[i][j] << " ";
                }
                cout << endl;
            }
        }
        else cout << "Элемент находится вне матрицы! \n";
    }
}
