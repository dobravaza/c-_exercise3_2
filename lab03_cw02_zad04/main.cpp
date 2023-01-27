#include <iostream>
using namespace std;

int main() {
        std::cout << "Autor: Grzegorz Dziuba, Nr indeksu: wwx13333, numer albumu: 22430" << std::endl;
    int choice;
    cout << "Wybierz jedna z opcji:" << endl;
    cout << "1. Opcja 1" << endl;
    cout << "2. Opcja 2" << endl;
    cout << "3. Opcja 3" << endl;
    cin >> choice;

    switch(choice) {
        case 1: // przypadek numer jeden, gdy choice === 1
            cout << "Wybrano opcje 1" << endl;
            break;
        case 2:// przypadek numer dwa, gdy choice === 2
            cout << "Wybrano opcje 2" << endl;
            break;
        case 3:// przypadek numer trzy, gdy choice === 3
            cout << "Wybrano opcje 3" << endl;
            break;
        default://opcja zadziala, gdy zaden z powyzszych case nie bedzie pasowac
            cout << "Niepoprawny wybor" << endl;
    }
    return 0;
}
