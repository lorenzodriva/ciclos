#include <iostream>
using namespace std;

int main(){

int numero = 0;

cout<<"Ingrese un numero para conocer su tabla: ";
cin>>numero;

for (int i = 1; i <= 10; i++){
    cout<<numero<<" x "<<i<<" = "<<(numero*i)<<endl;
}

return 0;
}
