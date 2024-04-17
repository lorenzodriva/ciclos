#include <iostream>
using namespace std;

int main(){

int numero = 0;
int i = 1;

cout<<"Ingrese un numero: ";
cin>>numero;

while(i<= numero){
    if (i%2 == 0){
        cout<<i;
    }
    i = i+1;
}

return 0;
}
