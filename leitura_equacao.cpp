void leitura_equacao(string eq, vector<char> vetor_eq, char incio_inter, deque<char> eq_atualizada){ //Um função que recebe como parâmetro a equação que usuário digitou, o vetor que guarda char's que guardará a equação na memória e o 1º intercalo e a fila dupla que vai guardar na memória a equação atualizada.
  deque<int> valores_chars_in;
  
  for(int i = 0; i < eq.length(); i++){ //Para -> enquanto i tiver um valor menor que a quantidade de caracteres contidos na string eq, o algortimo continuará entrando neste loop.
    vetor_eq.at(i).push_back(eq[i]); //Nesta linha, o vetor vetor_eq será usado para guardar na memória toda a equação digitada pelo usuário; guardando caracter por caracter.
  }

  /*Agora irá acontecer a varredura de toda a equação para conseguirmos lê-la, identificando cada caracter e, as vezes, seu sucessor(es) e/ou antecessor(es).*/
  for(int i = 0; i < vetor_eq.size(); i++){
    
    if(isdigit(vetor_eq.at(i))){ //Se o caracter na posição i for um número, iremos realizar está condição
      eq_atualizada.push_back(vetor_eq.at(i));  
    }

    else if(isalpha(vetor_eq.at(i))){
      if(isdigit(vetor_eq.at(i - 1)){
        eq_atualizada.push_back('*');
        eq_atualizada.push_back(inicio_inter);
      }
    
      else if(vetor_eq != 'x'){ //Aqui será feita a varredura das funções trancendentais -> cos(); sen(); tg(); ln(); log; arccos(); arcsen(); arctg(); sec(); cotg(); cossec();
        /*
        Programar aqui para funções transendentais.
        */
      }
    }

    else if(vetor_eq.at(i) == '+' or vetor_eq.at(i) == '-' or vetor_eq.at(i) == '/' or vetor_eq.at(i) == '*'){
      eq_atualizada.push_back(vetor_eq.at(i));
    }

    else if(vetor_eq.at(i) == '^'){
      if(isdigit(vetor_eq.at(i - 1))){
        eq_atualizada.push_back(vetor_eq.at(i));
      }
    }

    else{
       valores_chars_in.push_back(i); //Lembrar de implementar o resultado desta função para o tratamento de erro na função main.
    }
  }

  while(!valores_chars_in.empty()){
    cerr << "\nHá caractere(s) inválido(s) na equação digitada";
    for(int i = 1; i <= valores_chars_in.size(), i++){
      cout << "\nPosição " << i << ": " << vetor_eq.at(valores_chars_in.at(i)); 
    }
  }
}
