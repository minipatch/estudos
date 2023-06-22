#include "cabecario.hpp"


Cabecario::Cabecario(Pessoa p1,std::string Relatorio){
    this->_p1=p1;
    this->_RelatorioCliente=Relatorio;
    this->geradorProtocolo();

    // std::cout<<p1.getcpf()<<std::endl;
}




void Cabecario::geradorProtocolo(){
    std::string aux;

    unsigned int seed = static_cast<unsigned int>(time(0));

    srand(seed);

    int tam_proto = 20;

    for(int i=0;i<tam_proto;i++){
        aux = std::to_string(rand()%9);
        _protocologo += aux;
    }

}


Pessoa Cabecario::getPessoa(){
    return _p1;
}

std::string Cabecario::getProtocolo(){
    return _protocologo;
}

std::string Cabecario::getRelatorio(){
    return _RelatorioCliente;
}

