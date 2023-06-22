#include "pessoa.hpp"

Pessoa::Pessoa(){}


Pessoa::Pessoa(int idade,std::string nome,std::string cpf){
    this->_idade = idade;
    this->_nome = nome;
    this->_prioritaria = false;
    this->_cpf = cpf;
}


bool Pessoa::getPriodade(){
    if(_idade>=60){
        return _prioritaria = true;
    }
    else if(_idade<59){
        return _prioritaria = false;
    }
}

int Pessoa::getIdade(){
    return _idade;
}

std::string Pessoa::getNome(){
    return _nome;
}

std::string Pessoa::getcpf(){
    return _cpf;
}
