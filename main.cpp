// Michelle A. Santiago, michelle-angelic 
// 801 - 23 - 5483
// Colaboraciones: 
// Asignación: Suma de fracciones

#include<iostream>
using namespace std;

int main(){
  // desplegar propósito del código 

  cout << "Este programa suma dos fracciones."; 

  // declarar variables para evitar problemas después

  double num_1;
  double denom_1;

  double num_2;
  double denom_2;

  // pedir numerador de 1ra fracción

  cout << "Entre el numerador de la primera fracción: ";
  cin >> num_1;

  // pedir denominador de 1ra fracción

  cout << "Entre el denominador de la primera fracción: ";
  
  cin >> denom_1;

  // pedir numerador de 2nda fracción

  cout << "Entre el numerador de la segunda fracción: ";
  cin >> num_2;

  // pedir denominador de 2nda fracción

  cout << "Entre el denominador de la segunda fracción: ";
  cin >> denom_2;

  // suma numeradores 

  double sum_num = (num_1 * denom_2) + (num_2 * denom_1);

  // suma denominadores 
  
  double sum_denom = (denom_1 * denom_2);
  
  cout << "La suma es: " << sum_num << "/" << sum_denom << endl;

  
  return 0;
}
