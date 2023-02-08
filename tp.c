#include <stdio.h>

#include "ordenacao.h"

int main() {
    int n, t;
    lerQuantidade(&n, &t);
    Objeto* objetos = alocaObjetos(n);
    alocaPontos(&objetos, n, t);
    lerPontos(&objetos, n, t);
    calculaDeslocamento(&objetos, n, t);
    calcularDistancia(&objetos, n, t);
    imprime(objetos, n, t);
    return 0; 
}