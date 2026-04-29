// programa para imprimir tabela ascii

#include <stdio.h>

int main(){
    unsigned char i;
    int j;

    printf("------------------------------------------------------------------------------\n");
    printf("ASCII TABLE\n");
    printf("CHAR | DECIMAL | HEX | BINARIO\n");
    printf("------------------------------------------------------------------------------\n");

    for(i=0; i < 255 ; i++){
            printf("%5c | %5d | %0#5x | ", i, i, i);
            
            for(j=7; j >=0; j--){
                printf("%d", (i >> j) & 1);
            }
            printf("\n");
        }
    printf("%5c | %5d | %0#5x | ", i, i, i);
    for(j=7; j >=0; j--){
        printf("%d", (i >> j) & 1);
    }
    printf("\n");
    
    return 0;
}