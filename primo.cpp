#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
const int DIM = 10;

void riempiMatrice(int matrice[DIM][DIM]){
    for(int i=0;i<DIM;i++){
        for(int j=0;j<DIM;j++){
            matrice[i][j] = rand() % 100;
        }
        cout << endl;
    }
}
void stampa(int matrice[DIM][DIM]){
    for(int i = 0; i < DIM; i++){
        for(int j = 0; j < DIM; j++){
            cout << matrice[i][j] << " - "; 
        }
        cout << endl;
    }
}

int main() {

    srand(time(NULL));
    
    int matrix[DIM][DIM];
    int numero;

    riempiMatrice(matrix);
    stampa(matrix);

    cout << "Inserisci un numero: ";
    cin >> numero;

    int count = 0;
    for (int i = 0; i < DIM; i++) {
        for (int j = 0; j < DIM; j++) {
            if (matrix[i][j] == numero) {
                count++;
            }
        }
    }

    cout << "Il numero " << numero << " è presente " << count << " volte nella matrice." << endl;

    count = 0;

    for (int i = 0; i < DIM; i++) {
        if (matrix[i][i] == numero) {
            count++;
        }
    }

    cout << "Il numero " << numero << " è presente " << count << " volte nella diagonale principale." << endl;


    return 0;
}