#include <iostream>
#include <fstream>
#include <cmath>
#include <cstring>
#include <vector>
using namespace std;
<<<<<<< HEAD:1.2.cpp
ofstream Saida;

=======
//teste
>>>>>>> c18cf70d6bcdce8685e6ef18bd2ca8caeb71e2d7:1.1.cpp
class Pessoa{
    private:
        string nome;
        float salario;
    public:
        Pessoa(){
            cout<< "Digite o nome da pessoa: ";
            //getline(cin,nome);
            cin>> nome;
            Saida<< nome<< ";";
            
            cout<< "Digite o salario da pessoa: ";
            cin>> salario;
            Saida<< salario<< ";";
            Saida<< "\n";
            
        }
        string mostrar_nome(){return nome;}
        int mostrar_salario(){return salario;}
};

int main(){
    int n;

    Saida.open("pessoas.csv", ios:: app);

    cout<< "Digite quantas pessoas serao cadastradas: ";
    cin>> n;

    Pessoa *p = new Pessoa[n];

    //cout<< "Nome da pessoa cadastrada: "<< p->mostrar_nome()<< endl;
    //cout<< "Salario da pessoa cadastrada: "<< p->mostrar_salario()<< endl;

    delete p;
    return 0;
}
