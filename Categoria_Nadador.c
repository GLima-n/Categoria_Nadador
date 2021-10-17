#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
        setlocale(LC_ALL, "Portuguese");
        
        int idade_Nadador;
        int resposta;


        printf("Olá, nadador! Me indique, sua idade: ");
        scanf("%d", &idade_Nadador);

        resposta = idade_Nadador;


    if (idade_Nadador > 0){

        if (resposta>=5 && resposta<=7) { 
             printf("Você está na categoria Infantil A."); 
        }
        
         else if (resposta>=8 && resposta<=10)  { 
              printf("Você está na categoria Infantil B."); 
              
        }
          
         else if (resposta>=11 && resposta<=13) {
             printf("Você está na categoria Juvenil A."); 
        }
         
         else if (resposta>=14 && resposta<=17) {
             printf("Você está na categoria Juvenil B."); 
        }
        
         else if (resposta>=18 && resposta<=40) {
              printf("Você está na categoria Adulto."); 
        }
        
         else if (resposta >= 41) {
             printf("Você está na categoria Master."); 
        }

        else printf("Você ainda não atende à todos os requisitos para natação!");

}

        return 0;
}
