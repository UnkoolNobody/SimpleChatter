// Интересный собеседник: программа, которая НИКОГДА не поддержит ваш разговор.
#include <iostream>
#include <random>
using namespace std;

int conversation();

int main()
{
    setlocale(LC_ALL, "rus");
    int reply;
    char conver[255];
    cout << R"~(Так о чём ты там поболтать хотел? Я собеседник довольно интересный, разговор поддержать могу. Только покороче пиши, ок?)~"<<endl;
    while (true) {
        cout << ">";
        cin.getline(conver, 220);
        random_device rand;
        reply = conversation();
    }
}

int conversation() {
    int conv;
    conv = 1 + rand() % 25;
    switch (conv)
    {
    case 1: { cout << "Хех, мда.\n"; break; }
    case 2: { cout << "Ясно.\n"; break; }
    case 3: { cout << "А ты похож на!..\n"; break; }
    case 4: { cout << "Ок.\n"; break; }
    case 5: { cout << "Мммм...\n"; break; }
    case 6: { cout << ")\n"; break; }
    case 7: { cout << "Норм\n"; break; }
    case 8: { cout << "Ага\n"; break; }
    case 9: { cout << "Понятно.\n"; break; }
    case 10: { cout << "Спс\n"; break; }
    case 11: { cout << "Всё ясно.\n"; break; }
    case 12: { cout << "Нормуль\n"; break; }
    case 13: { cout << "Как-то так, да.\n"; break; }
    case 14: { cout << "Мхм.\n"; break; }
    case 15: { cout << "Ага, конечно.\n"; break; }
    case 16: { cout << "Oh yeah?\n"; break; }
    case 17: { cout << "Мне очень интересно.\n"; break; }
    case 18: { cout << "Тоже мне.\n"; break; }
    case 19: { cout << "Ага, да.\n"; break; }
    case 20: { cout << "Воу. Я правда удивлен. Типо.\n"; break; }
    case 21: { cout << "Ну и ну.\n"; break; }
    case 22: { cout << "Ты знаешь как писать?\n"; break; }
    case 23: { cout << "Воу. Я правда удивлен. Нет, серьёзно.\n"; break; }
    case 24: { cout << "Meh.\n"; break; }
    case 25: { cout << "Nah.\n"; break; }
    }
    return conv;
}