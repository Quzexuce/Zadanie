#include <iostream>
#include <vector>
#include <algorithm>
#include <clocale>

using namespace std;
//Создание структуры хранящей значение и индекс элемента массива
struct ValueInd {
    float val;
    int index;
};

// Создание компаратора - функция comp:
bool comp(const ValueInd& a, const ValueInd& b) {
    return a.val > b.val;
}


int main() {
    setlocale(LC_ALL, "ru");

    // Ввод размера массива
    int size;
    cin >> size;

    // Ввод самого массива
    vector<ValueInd> array(size);
    for (int i = 0; i < size; ++i) {
        cin >> array[i].val;
        array[i].index = i;
    }


    // Предварительная сортировка массива при помощи компаратора
    sort(array.begin(), array.end(), comp);

    // Вывод двух наибольших элементов и их индексов
    cout << "Наибольшие элементы:\n";
    for (int i = 0; i < min(2, size); ++i) {
        cout << "элемент: " << array[i].val << ", индекс: " << array[i].index << "\n";
    }

    return 0;
}
