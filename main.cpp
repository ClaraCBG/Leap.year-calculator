#include <iostream>
using namespace std;

int ano;

int ehBissexto(int ano){
if (ano%4==0 &&(ano%100!=0 || ano%400==0)){
return 1;
}else 
return 0;}

int main() {
  cin >> ano;

  int bissexto; 

 bissexto = ehBissexto(ano);
 if(bissexto==0){
 cout << "ano não é bissexto";
 }else 
 cout <<"ano é bissexto parabéns";
 return 0;  
}