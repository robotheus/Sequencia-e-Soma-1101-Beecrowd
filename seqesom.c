#include <stdio.h>
#include <stdlib.h>

void soma(int m, int n){
    int menor, maior, soma = 0;

    //pega maior e menor
    if(m > n) {
        menor = n;
        maior = m;
    } else {
        menor = m;
        maior = n;
    }

    int v[maior - menor], j = 0;
    //preenche o vetor ordenado e a soma
    for (int i = menor; i <= maior; i++) {
        soma += i;
        v[j] = i;
        j++;
    }
    //imprime em ordem
    for (int i = 0; i < j; i++){
        printf("%d ", v[i]);
    }
    
    printf("Sum=%d\n", soma);
}

int main(){
    int *m, *n, cont = 0;
    m = (int *) malloc(sizeof(int));
    n = (int *) malloc(sizeof(int));

    for(int i = 0; ; i++){
        scanf("%d %d", &m[i], &n[i]);
        if(m[i] <= 0 || n[i] <= 0) break;
        cont++;
    }
    
    for(int i = 0; i < cont; i++){
        soma(m[i], n[i]);
    }

return 0;
}