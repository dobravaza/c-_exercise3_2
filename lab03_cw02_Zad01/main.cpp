
#include <iostream>
using namespace std;

int main() {
    int number; // deklaracja zmiennej
    cout << "Autor: Grzegorz Dziuba, Nr indeksu: wwx13333, numer albumu: 22430" << endl;
    cout << "prosze podaj liczbe od 1 do 6, by wyswietlic ocene" << endl; // wyswietlamy tekst

    cout << " Prosze wcisnij 7 zeby przejsc do menu tygodnii" << endl; //wyswietlamy tekst

    cout << "Prosze wcisnij 0 by przejsc do menu miesiecy" << endl; //wyswietlamy tekst
    cin >> number; //wczytuje input uzytkownika
    if (number >= 1 && number <= 6) { // instrukcja warunkowa, if cyfra jest od 1 do 6 wyswietl odpowiedni tekst do odpowiedniej ceyfry
        if (number == 1) cout << "niedostateczny" << endl;
        else if (number == 2) cout << "dopuszczajacy" << endl;//else if input usera 2 to wyswietl tekst po prawej, analogicznie ponizej
        else if (number == 3) cout << "dostateczny" << endl;
        else if (number == 4) cout << "dobry" << endl;
        else if (number == 5) cout << "bardzo dobry" << endl;
        else if (number == 6) cout << "celujacy" << endl;
    }

    else if (number >= 1 && number <= 7) { //sprawdzamy input uzytkownika
                cout << "prosze podaj liczbe od 1 do 7 by wyswietlic dzien tygodnia" << endl;
    cin >> number; //wczytujemy zmienna
        if (number == 1) cout << "Poniedzialek" << endl;
        else if (number == 2) cout << "Wtorek" << endl;
        else if (number == 3) cout << "Sroda" << endl;
        else if (number == 4) cout << "Czwartek" << endl;
        else if (number == 5) cout << "Piatek" << endl;
        else if (number == 6) cout << "Sobota" << endl;
        else if (number == 7) cout << "Niedziela" << endl;
    }


    else if (number == 0) {//kolejne else if, sprawdza cyz input usera to 0, jesli tak mozna wybrac ktoras z opcji 1-12 ponizej


    cin >> number; //wczytanie inputa usera

        if (number == 1) cout << "Styczen" << endl;
        else if (number == 2) cout << "Luty" << endl;
        else if (number == 3) cout << "Marzec" << endl; // analogiczna sytuacja do powyzszej
        else if (number == 4) cout << "Kwiecien" << endl;
        else if (number == 5) cout << "Maj" << endl;
        else if (number == 6) cout << "Czerwiec" << endl;
        else if (number == 7) cout << "Lipiec" << endl;
        else if (number == 8) cout << "Sierpien" << endl;
        else if (number == 9) cout << "Wrzesien" << endl;
        else if (number == 10) cout << "Pazdziernik" << endl;
        else if (number == 11) cout << "Listopad" << endl;
        else if (number == 12) cout << "Grudzien" << endl;
    }
    else {//jesli zadna z powyzszych instrukcji nie zostanie wykonana zwracamy tekst ponizej
        cout << "podano nieprawidlowa liczbe" << endl;
    }
    return 0;
}
