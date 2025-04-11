#include <iostream> //Biblioteca padrão
#include <cctype> //Biblioteca usada para verificar se um caracter da equação, que se encintra em uma determinada posição, é uma número ou uma variável utilizando as funções: isdigit(elem) e isalpha(elem) 
#include <locale> //Biblioteca usada para que possa usar o programa usando as regras de assento do português
#include <vector> //Biblioteca usada para o caso da utilização de vetores
#include <cmath> //Biblioteca usada para casos onde será nececssário o uso de cálculos matemáticos
#include <deque>

using namespace std;

void leitura_equacao(string eq, vector<char> vetor_eq, char incio_inter, deque<char> eq_atualizada)

int main(){
  setlocale(LC_ALL, "portuguese");
  
  string equacao; //Variável do tipo string que recebrá a equação que o usuário deseja encontrar a raíz.
  vector<char> vetor_equacao; // => vetor_equacao == vetor_eq.
  char inicio_intervalo, final_intervalo; // => inicio_intervalo == inicio_inter.
  deque<char> equacao_atualizada; // => equacao_atualizada == eq_atualizada.
  int precisao;
  
  cout << "Digite a equação: ";
  getline(cin >> ws, equacao);

  cout << "\nDigite o intervalo inicial \n-> ";
  cin >> inicio_intervalo;

  cout << "\nDigite intervalo final \n-> ";
  cin >> final_intervalo;

  cout << "Digite a precição (a partir da vírgula)\n-> ";
  cin >> precisao;

  return 0;
}
