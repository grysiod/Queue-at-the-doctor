#include <iostream>
#include <queue>
#include<conio.h>

using namespace std;


int main()
{
    int wybor;
    string pacjent;
    queue<string>pacjenci;
    
    while (true) {
        cout << "Wybierz opcje\n";
        cout << "1. Rejestracja pacjenta\n";
        cout << "2. Liczba pacjentów w kolejce\n";
        cout << "3. Kto następny?\n";
        cout << "4. Wywolanie pacjenta\n";

        cin >> wybor;
        system("cls");
        switch (wybor) {
        case 1:
            cout << "Podaj imie i nazwisko pacjenta\n";
            cin >> pacjent;
            pacjenci.push(pacjent);
            cout << "Dodano pacjenta: " << pacjenci.back() << endl;
        break;
        
        case 2:
            cout << "Pacjenci w kolejce: " << pacjenci.size() << endl;
        break;

        case 3:
            if (pacjenci.empty()) {
                cout << "Kolejka jest pusta!\n";
                
            }
            else {
                cout << "Następny pacjent: " << pacjenci.front() << endl;
                
            }
        break;

        case 4:
            if (pacjenci.empty()) {
                cout << "Kolejka jest pusta!\n";

            }
            else {
                cout << "Do gabinetu wchodzi: " << pacjenci.front() << endl;
                pacjenci.pop();
            }
        break;
        }
        _getch();

       
    }
    return 0;

}
