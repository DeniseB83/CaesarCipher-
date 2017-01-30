#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

//die Funktion definieren

void caesar(string kette)
    {
        int laenge, verschiebung;

        //Laenge ermitteln
        laenge = kette.length();
        cout << "Caesar-Verschluesselung" << endl;

        //den Verschiebewert einlesen
        cout << "Bitte geben Sie den Verschiebewert ein: " << endl;
        cin >> verschiebung;

        cout << "Ergebnis: Caesar nur mit Verschiebewert " << endl;

        //jedes Zeichen um den Wert aus verschiebung verschieben
        for (int zaehler = 0; zaehler < laenge; zaehler++)
            cout << static_cast<char>(kette[zaehler]+ verschiebung);

        cout << endl << endl;
        cout << "Ergebnis: Caesar mit Verschiebewert und Position " << endl;

        //nun die Verschiebung abhängig von der Position weiterführen
        for (int zaehler = 0; zaehler < laenge; zaehler++)
             cout << static_cast<char>(kette[zaehler]+ (zaehler+1) + verschiebung);

        cout << endl << endl;
    }

int main()
{

    string eingabe;
    int berechnung;

    do {

        //Zeichenkette einlesen
        cout << "Bitte geben Sie eine Zeichenkette ein die kodiert werden soll:" << endl;
        getline(cin, eingabe);

        cout << "Sie moechten " << eingabe << " verschluesseln lassen." << endl;

        //Verschluesselung durchfuehren
        caesar(eingabe);

        cout << "Moechten Sie eine neue Berechnung starten?" <<'\n';
        cout << "1 - nein" << '\t' << "2 - ja" << endl;
        cin >> berechnung;
        fflush(stdin);

    } while (berechnung != 1);

    return 0;
}
