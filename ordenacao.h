# ifndef ordenacao_h
# define ordenacao_h

typedef struct ponto Ponto;

typedef struct objeto Objeto;

void lerQuantidade(int*, int*);

void lerPontos(Objeto **, int, int);

Objeto *alocaObjetos(int);

void alocaPontos(Objeto**, int, int);

void desalocaPontos(Ponto**);

void calculaDeslocamento(Objeto**, int, int);

void calcularDistancia(Objeto**, int, int);

void imprime(Objeto*, int, int);

# endif