#include <iostream>
#include <random>
#include <algorithm>
#include <cstdlib>
#include <locale>
#include <vector>
using namespace std;

//����� - ����� ����� ��� ������
//����� �� ���������� ������� ��������, � ������� �� �������

// ������� ���������
double sigmoid(double x)
{
    return 1 / (1 + exp(-x));
}
// ������� ���������� ���������� ������� ���� vector ���������� �������� ��������� �� 0 �� 1
vector<double> randomVector(int size)
{
    vector<double> a(size);

    for (double& i : a)  // ��� ��� ����, ����� ����������� ��� �������
    {
        i = (double)(rand()) / RAND_MAX;
    }
    return a;
}
// ��� ������
class neuron
{
public:
    int n{}; //������������� ����������
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
    ~neuron() // ��� �������� ������
        = default;
    // vector ��� ������� ������ ��� ������ �� ���� ��������� �������
};

int main() {
    // �������� ������ ������
    neuron axon;
    axon.n = 5;
    axon.activationFunc = false;
    axon.input = randomVector(axon.n);
    axon.weights = randomVector(axon.n);
    // ��������� ������ �������
    cout << axon.calc(axon.input, axon.weights, axon.activationFunc) << endl;

    return 0;
}