#include <iostream>
#include <fstream>
#include <cmath>
#include <cstring>
using namespace std;
ofstream Saida;

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