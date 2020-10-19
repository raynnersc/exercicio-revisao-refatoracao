#include <iostream>
#include <string>

#define HorasNormais 8

double Empregado::pagamentoMes(double horasTrabalhadas) {
 
      double t = horasTrabalhadas;
	  
	  //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
      if (horasTrabalhadas > HorasNormais) {
        double x = horasTrabalhadas - HorasNormais;
        t += x / 2;
      }
	  return t * salarioHora;
    }
