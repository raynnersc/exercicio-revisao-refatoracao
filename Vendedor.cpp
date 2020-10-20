#include <string>
#include "Vendedor.hpp"

#define meses 12

std::string Vendedor::get_nome()
{
  return nome;
}

void Vendedor::set_nome(std::string _nome)
{
  nome = _nome;
}

double Vendedor::quotaTotalAnual()
{
  return get_quotaMensalVendas() * meses;
}

void Vendedor::print(double horasTrabalhadas)
{
  std::cout << "Nome: " << get_nome() << std::endl;
  std::cout << "Salario Mes: " << pagamentoMes(horasTrabalhadas) << std::endl;  
  std::cout << "Quota vendas: " << quotaTotalAnual() << std::endl;
  std::cout << std::endl;
}
