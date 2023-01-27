#include <iostream>

using namespace std;

int main() {
int num1, num2;
char operation;

cout << "Autor: Grzegorz Dziuba, Nr indeksu: wwx13333, numer albumu: 22430" << endl;


cout << "Prosze wpisac pierwsza liczbe: " << endl; // zapytanie o wpisanie tekstu
cin >> num1; // wczytanie wpisanego inputa

cout << "Prosze wpisac druga liczbe: " << endl; // zapytanie o wpisanie tekstu
cin >> num2;// wczytanie wpisanego inputa

cout << "Proszê wybrac operacje: (+, -, *, /): " << endl; // zapytanie o wpisanie znaku
cin >> operation; // wczytanie wpisanego inputa przez usera

switch (operation) { // instrukcja switch
    case '+': // przypadek numer 1 z +
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl; //wyswietlamy zmienne ktore wpisalismy wczesniej, operacja dodawania sie wykonuje, wyswietlamy tekst
        break;//konczymy operacje, poniewaz uzytkownik wybral +
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;
    case '/':
        cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        break;
    default:
        cout << "Wybrales zly znak, sproboj ponownie (+, -, *, /)." << endl; // opcja default, sprawdza czy dziala tylko jesli powyzsze casy nie zadzialaja
}

return 0;
}
