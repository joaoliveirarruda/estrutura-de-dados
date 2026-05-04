// Programa para calcular o n-esimo termo da sequência de fibonacci

#include <stdio.h>
#include <math.h>
#include <limits.h>

long long binet(int n){
    if(n <= 0) return 0;

    double raiz_5 = sqrt(5.0);

    double phi = (1 + raiz_5) / 2.0;
    double psi = (1 - raiz_5) / 2.0;
    double fibonacci = 0;

    fibonacci = (pow(phi, n) - pow(psi, n)) / raiz_5;

    return (long long)round(fibonacci);
}

int main(){
    
    for(int i = 0; i <= 150; i++){
        long long resultado = binet(i);
        
        printf("%d termo da sequência de fibonacci: %lld\n", i, resultado);
    
    }
    

    return 0;

}