#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

class Empregado {
  public:
    double pagamentoMes(double horasTrabalhadas);
    double get_salarioHora();
    double get_quotaMensalVendas();
    void set_salarioHora(double _salarioHora);
    void set_quotaMensalVendas(double _quotaMensalVendas);
    virtual void print(double horasTrabalhadas);
  private:
    double salarioHora;  
    double quotaMensalVendas;
};

#endif
