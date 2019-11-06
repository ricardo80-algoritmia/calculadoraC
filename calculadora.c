#include <stdio.h> 
#include <stdlib.h>

void soma(){
    float prim, seg, result=0;
    printf("++++++++SOMA+++++++++")
    printf("Indique o 1 numero:\n");
    scanf("%f", &prim);

    printf("Indique o 2 numero:\n");
    scanf("%f", &seg);

    // soma dos valores
    result= prim+seg;

    printf("O resultado e: %.2f\n", result);
}

    void subtrai(){

    float prim, seg, result=0;

    printf("-------SUBTRACAO-------");

    printf("Indique o 1 numero:\n");
    scanf("%f", &prim);

    printf("Indique o 2 numero:\n");
    scanf("%f", &seg);
    // subtrai dos valores

    result= prim-seg;
    printf("O resultado e: %.2f\n", result);
      
	
}


void divide(){

    float prim, seg, result=0;

    printf("///////DIVISAO///////");

    printf("Indique o 1 numero:\n");

    scanf("%f", &prim);

    printf("Indique o 2 numero:\n");

    scanf("%f", &seg);

    // Divide os valores

    result= prim/seg;
    printf("O resultado e: %.2f\n", result);

}


void multiplica(){
    float prim, seg, result=0;
    printf("///////DIVISAO///////")

    printf("Indique o 1 numero:\n");
    scanf("%f", &prim);

    printf("Indique o 2 numero:\n");
    scanf("%f", &seg);

    // subtrai dos valores
    result= prim*seg;

    printf("O resultado e: %.2f\n", result);
}

void menu(){
    int escolha;

    printf("\t\tBem vindo a calculadora em C\n\n");

    printf("Selecione uma operacao matematica:\n");
    printf("\t1- Adicao\n");
    printf("\t2- Subtracao\n");
    printf("\t3- Divisao\n");
    printf("\t4- Multiplicacao\n");
    printf("\t5- Sair\n");
    printf("Operacao: ");
    scanf ("%d", &escolha);

    switch (escolha){
        case 1: 
            soma(); 
        break; 

        case 2:
            subtrai();
        break;

        case 3:
            divide();
        break;

        case 4:
            multiplica();
            break;

        case 5:
            system("exit");
            printf("\nFim...\n\n");
        break;

        default: 
            printf("\nComando invalido, tente novamente!\n\n");
            system ("pause");
            system ("cls");
            menu(); 
            break;
    }
}


int main(){
    menu();
    system("pause");
    return 0;
}
