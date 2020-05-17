#include <iostream>
using namespace std;
struct LUGGAGE                        // структура багаж
{
    int count;
    float weight;

    void Set()
    {
        cout << "Введите количество вещей: "; cin >> count;
        cout << "Введите суммарный вес: "; cin >> weight;
    }
    void Get()                                                   //методы доступа
    {
        cout << "Количество вещей: " << count << endl;
        cout << "Суммарный вес: " << weight << endl;
    }
};
void MaxCount(LUGGAGE* lug, int n)        // создание функции сравнения в диапазоне 0,5
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (lug[i].count == lug[j].count)
            {
                if (lug[i].weight + 0.5 >= lug[j].weight && lug[i].weight - 0.5 <= lug[j].weight)
                {
                    cout << "Имееются люди с почти одинаковым весом" << endl;
                    cout << "Веса: " << lug[i].weight << "  " << lug[j].weight << endl;
                    cout << "Кол-во вещей: " << lug[i].count << "  " << lug[j].count << endl;
                }
            }
        }
    }
}
int main()
{
    setlocale(NULL, "rus");
    int n;
    cout << "Введите кол-во пассажиров: "; cin >> n;
    LUGGAGE* lug = new LUGGAGE[n];
    for (int i = 0; i < n; i++)
        lug[i].Set();
    cout << endl;
    for (int i = 0; i < n; i++)
        lug[i].Get();
    MaxCount(lug, n);
    system("pause");
    return 0;
}
