#include<stdlib.h>
#include<time.h>
#include<stdio.h>
#include<unistd.h>
void menu();
int main(){
 
    menu();
    int escolha,tempo,converTempo;
    bool ligar = true;
   printf("Informe sua escolha: ");
    scanf("%d",&escolha);

   do {
        switch(escolha) {
            case 1:
                 ligar = false;
                 break;
            case 2:
                    printf("informe o tempo: ");
                    scanf("%d",&tempo);
                    converTempo = tempo*60;
                    sleep(converTempo);
                    printf("Está Quente o seu leite!!!\n");
                    ligar=false;
                    break;
            case 3:
                    printf("informe o tempo: ");
                    scanf("%d",&tempo);
                    converTempo = tempo*60;
                    sleep(converTempo);
                    printf("Sua pipoca está pronta!!!\n");
                    ligar=false;
                    break;
            case 4:
                    printf("informe o tempo: ");
                    scanf("%d",&tempo);
                    converTempo = tempo*60;
                    sleep(converTempo);
                    printf("Miojo Pronto! Não vai de suco tang!\n");
                    ligar=false;
                    break;
            case 5:
                    printf("informe o tempo: ");
                    scanf("%d",&tempo);
                    converTempo = tempo*60;
                    sleep(converTempo);
                    printf("Carge descongelada.\n");
                    ligar=false;
                    break;
            default:
                    printf("Opção inválida.");
                    ligar=false;
                    break;
         }
    
    }while(ligar !=false); 
   
    
    
    
    
    return 0;
} void menu(){
    printf(">>>>>>>>>> MICROOONDAS REMOTO <<<<<<<<<<\n");
    printf("O Aparelho está ligado, para desligar pressiona [1]");
    printf("Para as demais opção escolha: \n");
    printf("2 - Leite\n");
    printf("3 - Pipoca\n");
    printf("4 - Miojo\n");
    printf("5 - Descongelar Carne\n");
    
    }