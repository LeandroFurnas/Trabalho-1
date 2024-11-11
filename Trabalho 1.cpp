#include <iostream>

using namespace std;



int main() {

    float metros;
    long milimetros;


    cout << "introduza um número em metros: ";
    cin >> metros;

    milimetros = metros * 1000;

    cout << "a medida em milimetros é: " << milimetros << "mm" << endl;

    return 0;
}
