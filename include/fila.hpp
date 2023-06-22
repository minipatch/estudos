#ifndef FILA_HPP
#define FILHA_HPP


#include "pessoa.hpp"

const int MAX_TAM = 1000;

class Fila{
    private:
        Pessoa _null;

        Pessoa _p1;

        Pessoa fila[MAX_TAM];

        int pos = 0;

    public:

        Fila();

        void insert(Pessoa p1);


        void remove();

        void prioridade();


};





#endif