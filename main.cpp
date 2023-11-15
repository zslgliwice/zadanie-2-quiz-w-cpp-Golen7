#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

string imie;
string odp;

int main()
{
    cout << "\aPodaj imie: ";
    cin >> imie;
    int pkt = 0;

    int i = 0;
    cout<<"Ladowanie";
    while (i<2){
        i++;
        Sleep(1);
        cout<<"."<<flush;
        Sleep(1);
        cout<<"."<<flush;
        Sleep(1);
        cout<<"."<<flush;
        Sleep(1);
        cout << "\b\b\b   \b\b\b"<<flush;
    }
    system("cls");

    cout << imie << "Zapraszam do krotkiego testu\n";

    cout << "Co to jest C++?"<<endl;
    cout << "a) Piosenkarka"<<endl;
    cout << "b) Jezyk programowania"<<endl;
    cout << "c) Mlynek do herbaty"<<endl;
    cout << "Twoja odpowiedz: ";
    cin >> odp;
    if(odp == "b")
    {
        cout << "Poprawna odpowiedz!";
        pkt++;
    }
    else
    {
        cout << "Zle! Jest to jezyk programowania!";

    }
    Sleep(3000);
    system("cls");



    return 0;
}
