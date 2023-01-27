#include <iostream>
#include <cmath>

using namespace std;

int main() {
    std::cout << "Autor: Grzegorz Dziuba, Nr indeksu: wwx13333, numer albumu: 22430" << std::endl;
    int choice;
    double area, r, a, b, h; //zmienne
//ponizej menu
    cout << "Wybierz figure geometryczna:" << endl;
    cout << "1. Kwadrat" << endl;
    cout << "2. Kolo" << endl;
    cout << "3. Trojkat" << endl;
    cin >> choice; //powyzszy wybor liczby zostanie zapisany do zmiennej choice

    switch (choice) { //instrukcja switch z 3 case, kwadrat kolo, trojkat
        case 1://opcja numer 1
            cout << "Podaj dlugosc boku kwadratu:" << endl;
            cin >> a;//wczytujemy do zmiennej
            area = a * a; // liczby pole kwadratu do zmiennej a przypisujemy wartosc 2 zmiennych a
            cout << "Pole kwadratu wynosi: " << area << endl;
            break;//konczymy intrsukcje
        case 2://opcja nr2
                        cout << "Podaj promien kola:" << endl;
            cin >> r;//to samo co wyzej
            area = M_PI * r * r;
            cout << "Pole kola wynosi: " << area << endl;
            break;
        case 3://opcja nr 3
                        cout << "Podaj dlugosc podstawy trojkata:" << endl;
                        cout << "Podaj wysokosc trojkata:" << endl;
            cin >> a;
            cin >> b;

            area = 0.5 * a * h;
            cout << "Pole trojk¹ta wynosi: " << area << endl;
            break;
        default://opcja standardowa, dziala jak nie zadziala jedna z powyzszych 3 opcji
            cout << "Nieprawidlowy wybor." << endl;
    }

    return 0;
}
