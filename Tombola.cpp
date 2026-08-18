#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


// === CREA LA CARTELLA ===
void Crea(int c[3][9]){
    for(int i = 0; i < 3; i++){

        int numeri = 0;

        while(numeri < 5){

            int colonna = rand() % 9;
            int numero;

            // Numero in base alla colonna
            if(colonna == 0)
                numero = rand() % 9 + 1;
            else if(colonna == 8)
                numero = rand() % 11 + 80;
            else
                numero = rand() % 10 + colonna * 10;

            bool doppio = false;

            // Controlla se il numero è già presente
            for(int r = 0; r < 3; r++){
                for(int j = 0; j < 9; j++){
                    if(c[r][j] == numero)
                        doppio = true;
                }
            }

            if(c[i][colonna] == 0 && doppio == false){
                c[i][colonna] = numero;
                numeri++;
            }
        }
    }
}


// === STAMPA LA CARTELLA ===
void Stampa(int c[3][9]){
    for(int i = 0; i < 3; i++){

        for(int j = 0; j < 9; j++){

            if(c[i][j] == 0)
                cout << "   ";
            else if(c[i][j] == -1)
                cout << " X ";
            else
                cout << c[i][j] << " ";
        }

        cout << endl;
    }
}


// === CERCA E SPUNTA IL NUMERO ===
void Cerca(int c[3][9], int numero){

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 9; j++){

            if(c[i][j] == numero)
                c[i][j] = -1;
        }
    }
}


// === CONTROLLA SE HAI VINTO ===
bool Vinto(int c[3][9]){

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 9; j++){

            if(c[i][j] != 0 && c[i][j] != -1)
                return false;
        }
    }

    return true;
}


int main(){

    srand(time(0));

    int cartella[3][9];
    int estratti[90] = {0};
    int numero;

    // === CREA LA CARTELLA ===
    Crea(cartella);

    // === INIZIA IL GIOCO ===
    while(Vinto(cartella) == false){

        cout << "\nCARTELLA:\n";
        Stampa(cartella);

        cout << "\nPremi INVIO per estrarre...";
        cin.get();

        // === ESTRAE UN NUMERO ===
        do{
            numero = rand() % 90 + 1;
        }while(estratti[numero - 1] == 1);

        estratti[numero - 1] = 1;

        cout << "Numero estratto: " << numero << endl;

        // === CERCA IL NUMERO NELLA CARTELLA ===
        Cerca(cartella, numero);
    }

    cout << "\nHAI VINTO!" << endl;

    return 0;
}