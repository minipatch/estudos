#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <iostream>
#include <string>


class Pessoa{
    private:
        int _idade;
        std::string _nome;

        bool _prioritaria;

        std::string _cpf;
    public:
        Pessoa();

        Pessoa(int idade, std::string nome,std::string cpf);
        
        bool getPriodade();

        std::string getcpf();

        int getIdade();

        std::string getNome();
        
};








#endif