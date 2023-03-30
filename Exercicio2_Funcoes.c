/******************************************************************************

Exercicio 2 funcoes

*******************************************************************************/

#include <stdio.h>

float NOTA1(float nota_1){
    float result;
    result = nota_1 * 4;
    return result;
}
float NOTA2(float nota_2){
    float result;
    result = nota_2 * 6;
    return result;
}
float NOTA_PONDERADA(float peso1, float peso2){
    float result;
    result = (peso1 + peso2)/ (4 + 6);
    return result;
}

int main()
{
    float nota_1, nota_2, peso1, peso2, nota_ponderada;
    
    scanf("%f", &nota_1);
    scanf("%f", &nota_2);
    peso1 = NOTA1(nota_1);
    peso2 = NOTA2(nota_2);
    nota_ponderada = NOTA_PONDERADA(peso1, peso2);
    
    if(nota_ponderada > 0){
        printf("Sua media é de %f, e seu conceito final ficou como: D", nota_ponderada);
    }
    if(nota_ponderada > 4.9){
        printf("Sua media é de %f, e seu conceito final ficou como: C", nota_ponderada);
    }
    if(nota_ponderada > 6.9){
        printf("Sua media é de %f, e seu conceito final ficou como: B", nota_ponderada);
    }    
    if (nota_ponderada >= 9){
        printf("Sua media é de %f, e seu conceito final ficou como: A", nota_ponderada);
    }

    return 0;
}
