#include <iostream>

using namespace std;

/*Il primo programma svolge il seguente compito: crea una matrice di interi 10x10, la riempe di numeri casuali tra 0 e 99,
la stampa a video, chiede all'utente un numero a piacere e calcola e stampa quante volte questo numero è presente in una qualsiasi cella della matrice
e quante volte è presente una delle celle della diagonale principale. Utilizzare laddove opportuno delle funzioni per svolgere certe parti del programma,
richiamandole poi dal main.*/

void riempiMatrice(int array[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            array[i][j] = rand() % 100;
        }
    }
}

void stampa(int array[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            array[i][j] = rand() % 100;
        }
    }
}


int main() {
    
    int array[10][10];
    int numero;

    riempiMatrice(array);


    return 0;
}