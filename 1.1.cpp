#include <iostream>
#include <fstream>
#include <cmath>
#include <cstring>
#include <vector>
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
        string mostrar_nome(){return nome;}
        int mostrar_salario(){return salario;}
};

int main(){
    int n;

    cout<< "Digite quantas pessoas seram cadastradas: ";
    cin>> n;

    Pessoa *p = new Pessoa[n];

    cout<< "Nome da pessoa cadastrada: "<< p->mostrar_nome()<< endl;
    cout<< "Salario da pessoa cadastrada: "<< p->mostrar_salario()<< endl;

    delete p;
    return 0;
}
