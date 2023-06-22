#ifndef CABECARIO_HPP
#define CABECARIO_HPP

#include "pessoa.hpp"
#include <ctime>

class Cabecario{
    private:
        Pessoa _p1;
        
        std::string _protocologo;

        std::string _RelatorioCliente;

    public:

        Cabecario(Pessoa p1,std::string Relatorio);

        void geradorProtocolo();

        Pessoa getPessoa();

        std::string getRelatorio();

        std::string getProtocolo();
};


#endif 