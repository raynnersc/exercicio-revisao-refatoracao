#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include <string>
#include "Empregado.hpp"

class Engenheiro : public Empregado
{
  public:
    int get_projetos();
    void set_projetos(int _projetos);
    std::string get_nome();
    void set_nome(std::string _nome);
    void print(double horasTrabalhadas) override;
  private:
    std::string nome;  
	  int projetos;
};

#endif
