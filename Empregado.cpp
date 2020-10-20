#include "Empregado.hpp"
#include <string>
#include <iostream>

#define HorasNormais 8

double Empregado::pagamentoMes(double horasTrabalhadas)
{
  double t = horasTrabalhadas; 
	//Cálculo de hora extra (+50% se horasTrabalhadas > 8)
  if (horasTrabalhadas > HorasNormais) 
  {
    double x = horasTrabalhadas - HorasNormais;
    t += x / 2;
  }
	return t * salarioHora;
}

double Empregado::get_salarioHora()
{
  return salarioHora;
}

double Empregado::get_quotaMensalVendas()
{
  return quotaMensalVendas;
}

void Empregado::set_salarioHora(double _salarioHora)
{
  salarioHora = _salarioHora;
}

void Empregado::set_quotaMensalVendas(double _quotaMensalVendas)
{
  quotaMensalVendas = _quotaMensalVendas;
}

void Empregado::print(double horasTrabalhadas) {}
