#include <stdio.h>
#include <stdlib.h>

int main (void){
    int x, y, result, cont;
    cont = 1;

    while (cont <= 2){
        printf("\n(while) Entre com os dois numeros para serem somados: ");
        scanf("%d %d", &x, &y);

        result = x+y;
        printf("O resultado da soma e: %d \n", result);

        cont++;
    }

    for(cont = 1; cont <=2; cont++){
        printf("\n(for) Entre com os dois numeros para serem somados: ");
        scanf("%d %d", &x, &y);

        result = x+y;
        printf("O resultado da soma e: %d", result);
    }
    cont = 1;
    do{
        printf("\n(DO)digite dois numero para serem somados: ");
        scanf("%d %d", &x, &y);
        
        result = x+y;
        printf("O valor da soma e: %d", result);
        cont++;
    } while (cont <=2);

    return 0;
}