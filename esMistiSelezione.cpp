#include <iostream>
#include <cmath>
using namespace std;

// ESERCIZIO 1
// Data l'area di una circonferenza, calcolare il perimetro

int main() {
    float area;       // area della circonferenza
    float raggio;     // raggio della circonferenza
    float perimetro;  // perimetro della circonferenza

    cin >> area;

    raggio = sqrt(area / 3.14);
    perimetro = 2 * 3.14 * raggio;

    cout << perimetro;

    return 0;
}


// ESERCIZIO 2
// Dato il raggio, calcolare area e perimetro

int main() {
    float raggio;     // raggio
    float area;       // area
    float perimetro;  // perimetro

    cin >> raggio;

    area = 3.14 * raggio * raggio;
    perimetro = 2 * 3.14 * raggio;

    cout << area << endl;
    cout << perimetro;

    return 0;
}


// ESERCIZIO 3
// Convertire gradi, primi e secondi in secondi

int main() {
    int gradi;        // gradi
    int primi;        // primi
    int secondi;      // secondi
    int totale;       // totale dei secondi

    cin >> gradi >> primi >> secondi;

    totale = gradi * 3600 + primi * 60 + secondi;

    cout << totale;

    return 0;
}


// ESERCIZIO 4
// Calcolare somma e media di 3 numeri

int main() {
    float numero1;    // primo numero
    float numero2;    // secondo numero
    float numero3;    // terzo numero
    float somma;      // somma dei numeri
    float media;      // media dei numeri

    cin >> numero1 >> numero2 >> numero3;

    somma = numero1 + numero2 + numero3;
    media = somma / 3;

    cout << somma << endl;
    cout << media;

    return 0;
}


// ESERCIZIO 5
// Data il perimetro di un quadrato, calcolare l'area

int main() {
    float perimetro;  // perimetro del quadrato
    float lato;       // lato del quadrato
    float area;       // area del quadrato

    cin >> perimetro;

    lato = perimetro / 4;
    area = lato * lato;

    cout << area;

    return 0;
}


// ESERCIZIO 6
// Calcolare l'area di un trapezio

int main() {
    float base1;      // prima base
    float base2;      // seconda base
    float altezza;    // altezza
    float area;       // area del trapezio

    cin >> base1 >> base2 >> altezza;

    area = (base1 + base2) * altezza / 2;

    cout << area;

    return 0;
}


// ESERCIZIO 7
// Convertire euro in lire e dollari

int main() {
    float euro;       // saldo in euro
    float lire;       // saldo in lire
    float dollari;    // saldo in dollari

    cin >> euro;

    lire = euro * 1936.27;
    dollari = euro * 1.17;

    cout << lire << endl;
    cout << dollari;

    return 0;
}


// ESERCIZIO 8
// Calcolare perimetro e area di un triangolo rettangolo

int main() {
    float ipotenusa;  // ipotenusa
    float cateto1;    // primo cateto
    float cateto2;    // secondo cateto
    float perimetro;  // perimetro
    float area;       // area

    cin >> ipotenusa >> cateto1 >> cateto2;

    perimetro = ipotenusa + cateto1 + cateto2;
    area = cateto1 * cateto2 / 2;

    cout << perimetro << endl;
    cout << area;

    return 0;
}


// ESERCIZIO 9
// Calcolare perimetro e area di un triangolo isoscele

int main() {
    float lato;       // lato obliquo
    float altezza;    // altezza
    float base;       // base
    float perimetro;  // perimetro
    float area;       // area

    cin >> lato >> altezza;

    base = 2 * sqrt(lato * lato - altezza * altezza);
    perimetro = 2 * lato + base;
    area = base * altezza / 2;

    cout << perimetro << endl;
    cout << area;

    return 0;
}


// ESERCIZIO 10
// Visualizzare precedente e successivo

int main() {
    int numero;       // numero inserito
    int precedente;   // numero precedente
    int successivo;   // numero successivo

    cin >> numero;

    precedente = numero - 1;
    successivo = numero + 1;

    cout << precedente << endl;
    cout << successivo;

    return 0;
}