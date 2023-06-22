#include "pessoa.hpp"
#include "fila.hpp"
#include "cabecario.hpp"
#include <fstream>


int main(){
    

    std::cout<<"gostaria de escrever um novo paciente?"<<" digite qualquer numero"<<std::endl;

    std::cout<<"gostaria de ver um paciente que ja existe?"<<" digite 1"<<std::endl;

    int aux;
    std::cin>>aux;

    if(!isdigit(aux)){
        std::cout<< "nao foi inserido um numero"<<std::endl;
        return 0;
    }
     
    if(aux == 1){
        std::cout<<"para encontrar a pessoa digite seu nome e a idade"<<std::endl;

        std::string txt;

        std::cin>>txt;

        txt += ".txt";

        std::ifstream arquivo(txt);

        if(arquivo.is_open()){
            std::string aux;
            while(std::getline(arquivo,aux)){
                std::cout<<aux<<std::endl;
            }
        }
    }

    else{
        std::string nome;
        int idade;
        std::string cpf;




        std::cout<<"insira o nome da paciente"<<std::endl;

        std::cin>>nome;


        std::cout<<"insira a idade da paciente"<<std::endl;

        std::cin>>idade;



        std::cout<<"insira o cpf do paciente"<<std::endl;

        std::cin>>cpf;


        Pessoa p1(idade,nome,cpf);

        std::cout<<"oque o paciente esta sentindo?"<<std::endl;
        std::string relatorio;

        while(getline(std::cin,relatorio)){
            if(relatorio != ""){
                break;
            }
        }


        Cabecario c1(p1,relatorio);


        std::string txt;

        txt += p1.getNome() + std::to_string(p1.getIdade()) + ".txt";

        std::ofstream arquivo(txt,std::ios::app);
    
        std::cout<<c1.getProtocolo()<<std::endl;

        if(arquivo.is_open()){
            arquivo << "Nome: "<<p1.getNome()<<std::endl;
            arquivo << "Idade: "<<p1.getIdade()<<std::endl;
            arquivo << "Cpf: " <<p1.getcpf()<<std::endl;
            arquivo << "Relatorio: "<<c1.getRelatorio()<<std::endl;
            arquivo << "Protocolo: "<<c1.getProtocolo()<<std::endl;
            arquivo.close();
        }
        else{
            std::cout<<"não foi possivel abrir o arquivo"<<std::endl;
        }
    }
}