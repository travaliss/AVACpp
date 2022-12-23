#include <iostream>
#include <random>
#include <algorithm>
#include <cstdlib>
#include <locale>
#include <vector>
using namespace std;

//Класс - некий новый тип данных
//Класс не возвращает никакие значения, в отличии от функций

// Функция активации
double sigmoid(double x)
{
    return 1 / (1 + exp(-x));
}
// Функция рандомного заполнения массива типа vector рандомными дробными значенями от 0 до 1
vector<double> randomVector(int size)
{
    vector<double> a(size);

    for (double& i : a)  // это для того, чтобы пробежались все индексы
    {
        i = (double)(rand()) / RAND_MAX;
    }
    return a;
}
// Сам нейрон
class neuron
{
public:
    int n{}; //инициализация переменной
    double output = 0;
    vector<double> input;
    vector<double> weights;
    bool activationFunc{};
    double calc(vector<double> in, vector<double> w, bool f)
    {
        for (int i = 0; i < in.size(); ++i) {
            output += in[i] * w[i];
        }
        if (f) return output;
        else return sigmoid(output);
    }
    ~neuron() // для удаления данных
        = default;
    // vector сам удаляет данные при выходе из зоны видимости функции
};

int main() {
    // Создадим объект класса
    neuron axon;
    axon.n = 5;
    axon.activationFunc = false;
    axon.input = randomVector(axon.n);
    axon.weights = randomVector(axon.n);
    // Результат работы нейрона
    cout << axon.calc(axon.input, axon.weights, axon.activationFunc) << endl;

    return 0;
}