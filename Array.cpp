#include <iostream>
using namespace std;

int main()
{
    int jumlah_pesanan, menu;
    int harga_pesanan[10];
    int total_harga = 0;
    string pesanan[10];

    cout << "=====Selamat Datang Di Rumah Makan Y=====" << endl;
    cout << "Menu yang Tersedia" << endl;
    cout << "1.Nasi = 3RB" << endl;
    cout << "2.Ayam = 8RB" << endl;
    cout << "3.Jeruk = 4RB" << endl;
    cout << "4.Teh = 3RB" << endl;
    cout << "5.Tahu = 3RB" << endl;
    cout << "6.Tempe = 3RB \n"
         << endl;

    do
    {
        cout << "Pilihan menu yang Tersedia:" << endl;
        cout << "1.Harga Pesanan" << endl;
        cout << "2.Total harga pesanan" << endl;
        cout << "3.Keluar dari menu" << endl;
        cout << "Menu yang anda pilih: ";
        cin >> menu;
        cout << "\n";

        switch (menu)
        {
        case 1:
            cout << "Silahkan masukan jumlah pesanan anda: ";
            cin >> jumlah_pesanan;

            for (int i = 0; i < jumlah_pesanan; i++)
            {
                cout << "pesanan ke " << i + 1 << endl;
                cout << "Nama Pesanan: ";
                cin >> pesanan[i];
                cout << "harga pesanan: ";
                cin >> harga_pesanan[i];
                cout << endl;
                cout << "\n";
            }
            break;

        case 2:
            total_harga = 0;

            for (int i = 0; i < jumlah_pesanan; i++)
            {
                total_harga += harga_pesanan[i];
            }
            cout << "total harga pesanan : " << total_harga << endl;
            cout << "\n";
            break;

        case 3:
            cout << "Keluar Dari Menu. " << endl;
            break;

        default:
            cout << "Anomali";
            break;
        }
    } while (menu != 3);

    return 0;
}