#include <iostream> //Biblioteca padrão
#include <cctype> //Biblioteca usada para verificar se um caracter da equação, que se encintra em uma determinada posição, é uma número ou uma variável utilizando as funções: isdigit(elem) e isalpha(elem) 
#include <locale> //Biblioteca usada para que possa usar o programa usando as regras de assento do português
#include <vector> //Biblioteca usada para o caso da utilização de vetores
#include <cmath> //Biblioteca usada para casos onde será nececssário o uso de cálculos matemáticos

using namespace std;

int main(){
  string equacao; //Variável do tipo string que recebrá a equação que o usuário deseja encontrar a raíz.
  
  
  cout << "Digite a equação: ";
  getline(cin >> ws, equacao);

  return 0;
}
