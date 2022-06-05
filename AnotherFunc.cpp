/**
*   @file AnotherFunc.cpp
*/

/**
*    \author UnkoolNobody
*    \version 0.5 alpha
*    \date 29 Май 2022 года
*/

 /**
* \file
* \brief MatrixGame
*
* Данный файл содержит в себе исходный код программы, который должен изменять элемент в матрице.
 */
#include <iostream>
#include <random>
using namespace std;

const int n = 4; /// \brief const int n определяет размер матрицы.

class Matrix{}; /// \brief class Matrix - не используется в данном билде.

/**
*     \brief Функция рандомизации int Rand()
*
*     Данная функция возвращает случайное число из диапазона от 0 до 1.
*     Для выполнения нужна библиотека #include <random>.
* 
*     @return a - возвращает радномное число из диапазона 0,1 в формате int
*
*     Код функции выглядит следующим образом:
*     \code
*     int Rand() {
*          int a = rand() % 2;
*    return a;
*}
*     \endcode
*/
int Rand() {
           int a = rand() % 2;
    return a;
}

/**
*\brief Функция выхода из цикла
*
*Данная функция возвращает true если вся матрица единичная.
*
* @param{int} a[][n] - матрица размером 4 на 4
* 
* @return true (false) - булева функция
* 
*Код функции выглядит следующим образом:
*    \code
*    bool Win(int a[][n]) {
*   int k=0;
*    for (int i = 0; i < n; i++) {
*        for (int j = 0; j < n; j++) {
*            if (a[i][j] = 1) k++;
*        }
*    }
*    if (k == 25) return true;
*    else return false;
*    }
*}
*     \endcode
*/

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
    int a[n][n]; /// \brief Матрица заданной размерности.
    random_device rand; /// \brief Вызов рандомизации.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j]=Rand(); /// \brief Заполнение матрицы возвращённым случайным значением из функции.
        }
    }
    cout << "Сделай из нулевой матрицы единичную!"<<endl<<
        "Для этого укажи на элемент, который ты меняешь."<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j]<<" "; /// \brief Вывод матрицы.
        }
        cout << endl;
    }
    while (Win(a) == true) { /// \brief Цикл с условием победы.
        int str, sto;
        cout << "Укажи расположение изменяемого элемента.\nВведи его расположение в строке:\n";
        cin >> str; 
        cout << "Введи его расположение в столбце: \n";
        cin >> sto;
        str--;
        sto--;
        if (str >= 0 && str < n && sto >= 0 && sto < n) { /// \brief Проверка входа введённого значения в диапазон.
            if (a[str][sto] == 1) { /// \brief Проверка значения в ячейке матрицы.
                a[str][sto] = 0; /// \brief Ввод противоположного значения.
            }
            else { /// \brief Проверка значения в ячейке матрицы.
                a[str][sto] = 1; /// \brief Ввод противоположного значения.
            }
            cout << "Изменённая матрица: \n";
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    cout << a[i][j] << " "; /// \brief Вывод изменённой матрицы.
                }
                cout << endl;
            }
        }
        else cout << "Элемент находится вне матрицы! \n";
    }
}
