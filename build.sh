gcc -c ordenacao.c -Wall -lm
gcc -c tp.c -Wall 
gcc ordenacao.o tp.o -lm -o exe
./exe
