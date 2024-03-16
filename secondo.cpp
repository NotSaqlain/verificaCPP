#include <iostream>
#include <string>

using namespace std;

class Orario {
private:
    int ore;
    int minuti;
    int secondi;

public:
    Orario(int h, int m, int s){
        if (h < 0 || h > 23 || m < 0 || m > 59 || s < 0 || s > 59) {
            cout << "Orario Sabgliato" << endl;
            exit(1);
        }
        ore = h;
        minuti = m;
        secondi = s;
    }

    string toString() {
        return to_string(ore) + ":" + to_string(minuti) + ":" + to_string(secondi);
    }

    int toSeconds() {
        return (ore * 60 * 60) + (minuti * 60) + secondi;
    }

    int differenza(Orario ora2){
        return toSeconds() - ora2.toSeconds();
    }

};

int main() {
    Orario ora1(12, 30, 45);
    Orario ora2(10, 20, 30);

    cout << "Orario 1: " << ora1.toString() << endl;
    cout << "Orario 2: " << ora2.toString() << endl;
    cout << endl;

    cout << "Orario 1 in secondi: " << ora1.toSeconds() << endl;
    cout << "Orario 2 in secondi: " << ora2.toSeconds() << endl;
    cout << endl;

    cout << "Differenza tra orario 1 e orario 2: " << ora1.differenza(ora2) << " secondi" << endl;

    return 0;
}