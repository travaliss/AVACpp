#include <iostream>

using namespace std;

void swapper1(int* a, int* b) //передаём указатели на значения (тип int*)
{
    int helper = *a; //разыменовываем и передаём значение
    *a = *b;
    *b = helper;
}

void swapper2(int& a, int& b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

void swapper3(int& a, int& b)
{
    a = a xor b;
    b = b xor a;
    a = a xor b;
}

void swapper4(int& a, int& b)
{
    a = a * b;
    b = a / b;
    a = a / b;
}

void swapper5(int& a, int& b)
{
    struct swap
    {
        int a;
        int b;
    } swapper;

    swapper.a = b;
    swapper.b = a;

    a = swapper.a;
    b = swapper.b;
}

int main()
{
    int a, b;

    cin >> a >> b;
    cout << "Before: a = " << a << ", b = " << b << endl;

    //swapper1(&a, &b); //передаём адреса значений

    //swapper2(a, b);

    //swapper3(a, b);

    //swapper4(a, b);

    swapper5(a, b);

    cout << "After: a = " << a << ", b = " << b;
}