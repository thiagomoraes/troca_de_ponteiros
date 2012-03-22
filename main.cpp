/*
  Declarar 2 var int
  imprimir o valor delas usando ponteiro.
  declarar dois ponteiros e fazer eles apontar.. imprimir o conteudo dos ponteiros

  tarefa...
  implementar uma funcao que recebe dois parametros
  dois ponteiros para  troca( int* p1, int* p2)

  void troca(....

 */
#include <iostream>

void troca(int* p1, int* p2){
 int x = *p1;
    *p1 = *p2; // O "*" antes de p1 e p2  quer dizer que estou pegando o valor do endereço do ponteiro. "*"
    *p2 = x;
}
main()
{
   int  a=111, b=222;
   int *ponteiro1, *ponteiro2;
   ponteiro1 = &a, ponteiro2 = &b;

   troca(ponteiro1, ponteiro2);
   std:: cout << "a= "<< *ponteiro1 <<"\nb= "<< *ponteiro2<< "\n\n\n";
}
