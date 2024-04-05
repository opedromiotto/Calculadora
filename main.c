/*programa que funcione como uma calcualdora. o programa deve apresentar um nenu ao usuário da seguinte forma:
1 - Somar
2 - Subtrair
3 - Multiplicar
4 - Dividir
0 - Sair
uma estrutura do tipo switch case deve ser utilizada para realizar cada operação em um case.  após a escolha da operação, dois valores devem ser pedidos
ao usuario para realizar a operação escolhida. se a operação escolhida for 4 o dividndo nao pode ser 0, um novo valor deve ser solicittado.
o programa deve funcionar até que o usuário escolha a opção 0*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int escolha, continuar;
    float n1, n2;

    do{
        do{
        printf("Digite 1 - Somar\nDigite 2 - Subtrair\nDigite 3 - Multiplicar\nDigite 4 - Dividir\nDigite 0 - Sair\nInforme a operacao que deseja realizar: ");
        scanf("%d", &escolha);
        if (escolha < 0 || escolha > 4){
            printf("Valor invalido, tente novamente\n");
            while(getchar() != '\n');   
        }
        }while(escolha < 0 || escolha > 4);
        switch (escolha){
        case 0:
            printf("Saindo do programa....\n");
            break;
        case 1:
            printf("Informe o primeiro valor: ");
            scanf("%f", &n1);
            printf("Informe o segundo valor: ");
            scanf("%f", &n2);
            printf("%.2f + %.2f = %.2f", n1, n2, n1 + n2);
            break;
        case 2:
            printf("Informe o primeiro valor: ");
            scanf("%f", &n1);
            printf("Informe o segundo valor: ");
            scanf("%f", &n2);
            printf("%.2f - %.2f = %.2f", n1, n2, n1 - n2);
            break;
        case 3:
            printf("Informe o primeiro valor: ");
            scanf("%f", &n1);
            printf("Informe o segundo valor: ");
            scanf("%f", &n2);
            printf("%.2f x %.2f = %.2f", n1, n2, n1 * n2);
            break;
        case 4:
            do{
                printf("Informe o primeiro valor: ");
                scanf("%f", &n1);
                printf("Informe o segundo valor: ");
                scanf("%f", &n2);

                if(n2 == 0){
                    printf("Dividendo nao pode ser igual a zero, tente novamente...\n");
                }
                else{
                    printf("%.2f / %.2f = %.2f", n1, n2, n1 / n2);
                }
            }while(n2 == 0);
        }

        if(escolha != 0){
            do{
                printf("\nDigite 1 - Informar novos valores\nDigite 2 - Sair\nInforme sua escolha: ");
                scanf("%d", &continuar);
                if(continuar != 1 && continuar != 2){
                    printf("\nDigite apenas 1 ou 2\n");
                    while(getchar() != '\n');
                    continue;
                }
            }while(continuar != 1 && continuar != 2);
            if(continuar == 2){
                printf("Saindo do programa...\n\n");
            }
        }
    }while(continuar == 1);
}