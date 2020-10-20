#include <string>
#include "Engenheiro.hpp"

int Engenheiro::get_projetos()
{
  return projetos;
}

void Engenheiro::set_projetos(int _projetos)
{
  projetos = _projetos;
}

std::string Engenheiro::get_nome()
{
  return nome;
}

void Engenheiro::set_nome(std::string _nome)
{
  nome = _nome;
}

void Engenheiro::print(double horasTrabalhadas)
{
  std::cout << "Nome: " << get_nome() << std::endl;
  std::cout << "Salario Mes: " << pagamentoMes(horasTrabalhadas) << std::endl;
  std::cout << "Projetos: " << get_projetos() << std::endl;
  std::cout << std::endl;
}
