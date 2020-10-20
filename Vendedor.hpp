#ifndef VENDEDOR_H
#define VENDEDOR_H

#include <string>
#include "Empregado.hpp"

class Vendedor : public Empregado
{
  public:
    std::string get_nome();
    void set_nome(std::string _nome);	  
    double quotaTotalAnual();
    void print(double horasTrabalhadas) override;
	private:
    std::string nome;
};

#endif
