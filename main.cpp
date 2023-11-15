#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

string imie;
string odp;

int main()
{
    int i = 0;
    cout << "Ladowanie";
    while (i < 2) {
        i++;
        Sleep(1000);
        cout << "." << flush;
        Sleep(1000);
        cout << "." << flush;
        Sleep(1000);
        cout << "." << flush;
        Sleep(1000);
        cout << "\b\b\b   \b\b\b" << flush;
    }
    system("cls");

    cout << "\aPodaj imie: ";
    cin >> imie;
    int pkt = 0;

    cout << "Witaj " << imie << " zapraszam do krotkiego testu\n";

    cout << "Co to jest C++?" << endl;
    cout << "a) Piosenkarka" << endl;
    cout << "b) Jezyk programowania" << endl;
    cout << "c) Mlynek do herbaty" << endl;
    cout << "Twoja odpowiedz: ";
    cin >> odp;
    if (odp == "b")
    {
        cout << "Poprawna odpowiedz!";
        pkt++;
    }else cout << "Zle! Jest to jezyk programowania!";

    Sleep(3000);
    system("cls");

    cout << "Ktory program jest programem graficznym?" << endl;
    cout << "a) Word" << endl;
    cout << "b) Paint" << endl;
    cout << "c) Minecraft" << endl;
    cout << "Twoja odpowiedz: ";
    cin >> odp;
    if (odp == "b")
    {
        cout << "Poprawna odpowiedz!";
        pkt++;
    }
    else cout << "Zle! Programem graficznym jest Paint";

    Sleep(3000);
    system("cls");

    cout << "Ktore polecenie oznacza petle w jezykach programowania?" << endl;
    cout << "a) for" << endl;
    cout << "b) if" << endl;
    cout << "c) yellow" << endl;
    cout << "Twoja odpowiedz: ";
    cin >> odp;
    if (odp == "a")
    {
        cout << "Poprawna odpowiedz!";
        pkt++;
    }
    else cout << "Zle! Petla jest polecenie for";

    Sleep(3000);
    system("cls");

    cout << "Jakie zwierze zywi sie glownie mlekiem?" << endl;
    cout << "a) pies" << endl;
    cout << "b) krowa" << endl;
    cout << "c) zadne z podanych" << endl;
    cout << "Twoja odpowiedz: ";
    cin >> odp;
    if (odp == "c")
    {
        cout << "Poprawna odpowiedz!";
        pkt++;
    }
    else cout << "Zle! Zadne z podanych zwierzat nie zywi sie mlekiem";

    Sleep(3000);
    system("cls");

    cout << "Jaki kolor ma trawa?" << endl;
    cout << "a) zielony" << endl;
    cout << "b) czerwony" << endl;
    cout << "c) purpurowy" << endl;
    cout << "Twoja odpowiedz: ";
    cin >> odp;
    if (odp == "a")
    {
        cout << "Poprawna odpowiedz!";
        pkt++;
    }
    else cout << "Zle! Trawa jest zielona";

    Sleep(3000);
    system("cls");

    cout << "Brawo! zdobyles: " << pkt << "/5 punktow";

    return 0;
}
