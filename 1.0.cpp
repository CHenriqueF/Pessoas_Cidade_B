#include <iostream>
#include <fstream>
#include <cmath>
#include <cstring>
using namespace std;

class Pessoa{
    private:
        string nome;
        float salario;
    public:
        Pessoa(){
            cout<< "Digite o nome da pessoa: ";
            cin>> nome;
            
            cout<< "Digite o salario da pessoa: ";
            cin>> salario;
        }
};

int main(){

    cout<< "Hello world";
    
    return 0;
}