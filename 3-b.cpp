#include <iostream>
#include <limits>

using namespace std;

int main() {
    unsigned long int uli;
    unsigned long int maximo = numeric_limits<unsigned long int>::max();
    unsigned long int minimo = numeric_limits<unsigned long int>::min();

    uli = maximo;
    cout << "Valor máximo de int: " << uli << endl;
    uli = minimo;
    cout << "Valor mínimo de int: " << uli << endl;

    return 0;
}

