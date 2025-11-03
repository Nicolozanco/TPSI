#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    int val = 0;

    printf("Inserisci un numero: ");
    scanf("%d", &val);

    if (val % 2 == 0){
        printf("Il numero %d e' pari\n", val);
    } else {
        printf("Il numero %d e' dispari\n", val);
    }

    
}