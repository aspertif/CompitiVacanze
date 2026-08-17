#include <iostream>
using namespace std;


// ESERCIZIO 45
// Controllare se una persona è maggiorenne

int main() {
    int eta;              // età della persona

    cin >> eta;

    if (eta >= 18)
        cout << "Maggiorenne";
    else
        cout << "Minorenne";

    return 0;
}


// ESERCIZIO 46
// Ordinare 3 numeri e calcolare la media

int main() {
    int numero1;          // primo numero
    int numero2;          // secondo numero
    int numero3;          // terzo numero
    float media;          // media dei numeri
    int temp;              // variabile temporanea

    cin >> numero1 >> numero2 >> numero3;

    if (numero1 > numero2) {
        temp = numero1;
        numero1 = numero2;
        numero2 = temp;
    }

    if (numero2 > numero3) {
        temp = numero2;
        numero2 = numero3;
        numero3 = temp;
    }

    if (numero1 > numero2) {
        temp = numero1;
        numero1 = numero2;
        numero2 = temp;
    }

    cout << numero1 << " " << numero2 << " " << numero3 << endl;

    media = (numero1 + numero2 + numero3) / 3.0;

    cout << media;

    return 0;
}


// ESERCIZIO 47
// Controllare se ci sono numeri uguali

int main() {
    int numero1;          // primo numero
    int numero2;          // secondo numero
    int numero3;          // terzo numero

    cin >> numero1 >> numero2 >> numero3;

    if (numero1 == numero2 || numero1 == numero3 || numero2 == numero3)
        cout << "Ci sono numeri uguali";
    else
        cout << "Non ci sono numeri uguali";

    return 0;
}


// ESERCIZIO 48
// Trovare il minore e il maggiore tra 4 numeri

int main() {
    int numero1;          // primo numero
    int numero2;          // secondo numero
    int numero3;          // terzo numero
    int numero4;          // quarto numero
    int maggiore;         // numero maggiore
    int minore;           // numero minore

    cin >> numero1 >> numero2 >> numero3 >> numero4;

    maggiore = numero1;
    minore = numero1;

    if (numero2 > maggiore)
        maggiore = numero2;

    if (numero3 > maggiore)
        maggiore = numero3;

    if (numero4 > maggiore)
        maggiore = numero4;

    if (numero2 < minore)
        minore = numero2;

    if (numero3 < minore)
        minore = numero3;

    if (numero4 < minore)
        minore = numero4;

    cout << "Minore: " << minore << endl;
    cout << "Maggiore: " << maggiore;

    return 0;
}


// ESERCIZIO 49
// Calcolare area e perimetro solo se il lato è diverso da 0

int main() {
    float lato;           // lato del quadrato
    float area;           // area del quadrato
    float perimetro;      // perimetro del quadrato

    cin >> lato;

    if (lato != 0) {
        area = lato * lato;
        perimetro = lato * 4;

        cout << "Area: " << area << endl;
        cout << "Perimetro: " << perimetro;
    }

    return 0;
}


// ESERCIZIO 50
// Sconto del 20% sulla parte della spesa che supera 100 euro

int main() {
    float spesa;          // totale della spesa
    float sconto;         // importo dello sconto
    float totale;         // totale da pagare

    cin >> spesa;

    if (spesa > 100) {
        sconto = (spesa - 100) * 20 / 100;
        totale = spesa - sconto;
    }
    else {
        totale = spesa;
    }

    cout << totale;

    return 0;
}

#include <iostream>
using namespace std;


// ESERCIZIO 51
// Verificare se un numero è divisibile per 5

int main() {
    int numero;             // numero inserito

    cin >> numero;

    if (numero % 5 == 0)
        cout << "Divisibile per 5";
    else
        cout << "Non divisibile per 5";

    return 0;
}


// ESERCIZIO 52
// Triplo se dispari, doppio se pari

int main() {
    int numero;             // numero inserito

    cin >> numero;

    if (numero % 2 == 0)
        cout << numero * 2;
    else
        cout << numero * 3;

    return 0;
}


// ESERCIZIO 53
// Calcolare superficie e volume di un cubo

int main() {
    float lato;             // lato del cubo
    float superficie;       // superficie totale
    float volume;           // volume del cubo

    cin >> lato;

    if (lato > 0) {
        superficie = lato * lato * 6;
        volume = lato * lato * lato;

        cout << "Superficie: " << superficie << endl;
        cout << "Volume: " << volume;
    }

    return 0;
}


// ESERCIZIO 54
// Calcolare il prezzo del biglietto in base all'età

int main() {
    int eta;                // età dello spettatore
    int prezzo;             // prezzo del biglietto

    cin >> eta;

    if (eta <= 10 || eta > 65)
        prezzo = 0;
    else if (eta <= 18)
        prezzo = 5;
    else
        prezzo = 10;

    cout << prezzo << " euro";

    return 0;
}


// ESERCIZIO 55
// Stabilire il tipo di triangolo

int main() {
    int lato1;              // primo lato
    int lato2;              // secondo lato
    int lato3;              // terzo lato

    cin >> lato1 >> lato2 >> lato3;

    if (lato1 == lato2 && lato2 == lato3)
        cout << "Equilatero";
    else if (lato1 == lato2 || lato1 == lato3 || lato2 == lato3)
        cout << "Isoscele";
    else
        cout << "Scaleno";

    return 0;
}


// ESERCIZIO 56
// Ordinare 4 numeri in senso crescente

int main() {
    int numero1;            // primo numero
    int numero2;            // secondo numero
    int numero3;            // terzo numero
    int numero4;            // quarto numero
    int temp;                // variabile temporanea

    cin >> numero1 >> numero2 >> numero3 >> numero4;

    if (numero1 > numero2) {
        temp = numero1;
        numero1 = numero2;
        numero2 = temp;
    }

    if (numero2 > numero3) {
        temp = numero2;
        numero2 = numero3;
        numero3 = temp;
    }

    if (numero3 > numero4) {
        temp = numero3;
        numero3 = numero4;
        numero4 = temp;
    }

    if (numero1 > numero2) {
        temp = numero1;
        numero1 = numero2;
        numero2 = temp;
    }

    if (numero2 > numero3) {
        temp = numero2;
        numero2 = numero3;
        numero3 = temp;
    }

    if (numero1 > numero2) {
        temp = numero1;
        numero1 = numero2;
        numero2 = temp;
    }

    cout << numero1 << " " << numero2 << " " << numero3 << " " << numero4;

    return 0;
}


// ESERCIZIO 57
// Sommare due numeri di tre cifre usando le cifre

int main() {
    int numero1;            // primo numero
    int numero2;            // secondo numero
    int unita1;             // unità del primo numero
    int unita2;             // unità del secondo numero
    int decine1;            // decine del primo numero
    int decine2;            // decine del secondo numero
    int centinaia1;         // centinaia del primo numero
    int centinaia2;         // centinaia del secondo numero
    int somma;              // risultato

    cin >> numero1 >> numero2;

    unita1 = numero1 % 10;
    unita2 = numero2 % 10;

    decine1 = (numero1 / 10) % 10;
    decine2 = (numero2 / 10) % 10;

    centinaia1 = numero1 / 100;
    centinaia2 = numero2 / 100;

    somma = numero1 + numero2;

    cout << somma;

    return 0;
}


// ESERCIZIO 58
// Visualizzare il nome del mese

int main() {
    int mese;               // numero del mese

    cin >> mese;

    switch (mese) {
        case 1: cout << "Gennaio"; break;
        case 2: cout << "Febbraio"; break;
        case 3: cout << "Marzo"; break;
        case 4: cout << "Aprile"; break;
        case 5: cout << "Maggio"; break;
        case 6: cout << "Giugno"; break;
        case 7: cout << "Luglio"; break;
        case 8: cout << "Agosto"; break;
        case 9: cout << "Settembre"; break;
        case 10: cout << "Ottobre"; break;
        case 11: cout << "Novembre"; break;
        case 12: cout << "Dicembre"; break;
        default: cout << "Mese non valido";
    }

    return 0;
}


// ESERCIZIO 59
// Verificare se un anno è bisestile

int main() {
    int anno;               // anno inserito

    cin >> anno;

    if (anno < 0)
        return 0;

    if (anno > 1584 && (anno % 400 == 0 || (anno % 4 == 0 && anno % 100 != 0)))
        cout << "Anno bisestile";
    else
        cout << "Non bisestile";

    return 0;
}