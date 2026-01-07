#include <iostream>
using namespace std;

int main()
{
    string nama;
    int pilihan, malam;
    char ulang;

    string kamar[3] = {"Standard", "Deluxe", "Suite"};
    int harga[3] = {300000, 500000, 800000};

    do
    {
        cout << "=== SISTEM PEMESANAN HOTEL ===\n";
        cout << "Nama Pemesan : ";
        cin >> nama;

        cout << "\nPilih Tipe Kamar:\n";
        for (int i = 0; i < 3; i++)
        {
            cout << i + 1 << ". " << kamar[i] << " - Rp" << harga[i] << "/malam\n";
        }

        cout << "Pilihan (1-3): ";
        cin >> pilihan;

        cout << "Lama Menginap (malam): ";
        cin >> malam;

        if (pilihan >= 1 && pilihan <= 3)
        {
            int total = harga[pilihan - 1] * malam;

            cout << "\n--- STRUK PEMESANAN ---\n";
            cout << "Nama        : " << nama << endl;
            cout << "Kamar       : " << kamar[pilihan - 1] << endl;
            cout << "Harga/Malam : Rp" << harga[pilihan - 1] << endl;
            cout << "Lama Inap   : " << malam << " malam\n";
            cout << "Total Bayar : Rp" << total << endl;
        }
        else
        {
            cout << "Pilihan tidak valid!\n";
        }

        cout << "\nPesan lagi? (y/n): ";
        cin >> ulang;
        cout << endl;

    } while (ulang == 'y' || ulang == 'Y');

    cout << "Terima kasih.\n";
    return 0;
}