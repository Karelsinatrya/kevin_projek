#include <iostream>
using namespace std;

int main()
{
    int pilihan;
    char ulang;
    int voteA = 0, voteB = 0, voteC = 0;

    do
    {
        cout << "=== SISTEM VOTING ===\n";
        cout << "1. Kandidat A\n";
        cout << "2. Kandidat B\n";
        cout << "3. Kandidat C\n";
        cout << "Pilih kandidat (1-3): ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            voteA++;
            break;
        case 2:
            voteB++;
            break;
        case 3:
            voteC++;
            break;
        default:
            cout << "Pilihan tidak valid!\n";
            break;
        }

        cout << "Voting lagi? (y/n): ";
        cin >> ulang;
        cout << endl;

    } while (ulang == 'y' || ulang == 'Y');

    cout << "=== HASIL VOTING ===\n";
    cout << "Kandidat A: " << voteA << endl;
    cout << "Kandidat B: " << voteB << endl;
    cout << "Kandidat C: " << voteC << endl;

    return 0;
}