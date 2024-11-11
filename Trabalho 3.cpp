#include <iostream>
using namespace std;

int horas,money;
const double IRS = 0.125;
int main(){

cout <<"Digite a quantidade de horas trabalhadas: ";
cin >> horas;
cout <<"Digite quando recebe por hora: ";
cin >> money;
float desconto = horas * money * IRS;
cout << "O dinherio recebido ja em conta o IRS é de: "
<< horas * money -desconto << endl;

return 0; 
}
