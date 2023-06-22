#include "fila.hpp"

Fila::Fila(){
    // this->_p1 = p1;
}


void Fila::insert(Pessoa p1){
    fila[pos] = p1;
    pos++;   
}

void Fila::remove(){
   for(int i=0;i<pos;i++){
        std::cout<<"posicao: "<< i+1 <<std::endl;
        std::cout<<"nome: "<<fila[i].getNome()<<std::endl;
        std::cout<<"idade: "<<fila[i].getIdade()<<std::endl;

    }
}

void Fila::prioridade(){
    Pessoa aux1;

    Pessoa aux2;    

    for(int i=0;i<pos;i++){
        if(fila[i].getPriodade() == true){
            aux1 = fila[i];

            if(fila[i+1].getPriodade() == true){
                aux2 = fila[i+1];
            }
            for(int j= pos-1;j>0;j--){
                fila[j] = fila[j-1];
            }
            fila[0] = aux1;
            fila[i+1] = aux2;


        }
    }

    for(int i=1;i<pos;i++){
        if(fila[i].getPriodade() == true && fila[i-1].getPriodade()){
            if(fila[i].getIdade()>fila[i-1].getIdade()){
                std::swap(fila[i],fila[i-1]);
            }
        }
    }
}

