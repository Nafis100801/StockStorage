// UasAlpro.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <conio.h>

#include <stdio.h>

#include<stdlib.h>

#include <string.h>




using namespace std;

typedef struct {

	int kode;

	char nama[20];

	int stock;

	char lokasi[20];

}

brg;

brg barang[5];

brg lok[5];

brg temp;

int n, i, b, cari, ada, bln, menu;
int jumlahRekursif(int x, int a){
    cout << "Berapa jumlah penjualan: ";
    cin >> a;
    if (x==0){
        return a;
    }else{
        return a + jumlahRekursif(x-1,a);
    }
}

int main()

{

	cout << "\t\t" << "==================================================================================" << endl;

	cout << "\t\t" << "|                      	DATA PENJUALAN PLN MOBILE RB BLITAR     	             |" << endl;

	cout << "\t\t" << "==================================================================================" << endl;

	cout << "\t\t" << "|                                  KELOMPOK 4                                     |" << endl;

	cout << "\t\t" << "==================================================================================" << endl << endl;

	cout << "\t\t" << "|                                     MENU                                        |" << endl;
	
	cout << "\t\t" << "| 1. Input Data                            								       |" << endl;
	cout << "\t\t" << "| 2. Searching Barang                    						               |" << endl;
	cout << "\t\t" << "| 3. Input Data penjualan Barang        				                           |" << endl;
	cout << "\t\t" << "| Pilih Menu                           							               |" ;
	cin >> menu << endl;

	swicth (menu){
		case 1:
			cout<< inputd;
			break;
		
		case 2:
			cout<< search;
			break;
			
	}

	cout << "\t\t\t\t\t\t" << "Masukan banyak data = ";

	cin >> n;

	for (i = 0; i < n; i++) {

		cout << endl;

		cout << "\t\t\t\t\t\t" << "Data ke-" << (i + 1) << ":" << endl;

		cout << "\t\t\t\t\t\t" << "Input Kode Barang : "; cin >> barang[i].kode;

		cout << "\t\t\t\t\t\t" << "Input Nama Barang: "; cin >> gets(barang[i].nama);

		cout << "\t\t\t\t\t\t" << "Input Stock Barang : "; cin >> barang[i].stock;

		cout << "\t\t\t\t\t\t" << "Katalog : "; cin >> gets(barang[i].lokasi);

		cout << endl;

	}



	cout << "\t\t\t" << "Data Barang Anda" << endl;

	cout << "\t\t\t" << "===================================================================" << endl;

	cout << "\t\t\t" << "|   Kode Barang  |  Nama Barang  | Stock Barang |  Lokasi Barang  |" << endl;

	cout << "\t\t\t" << "===================================================================" << endl;

	for (i = 0; i < n; i++) {



		cout << "\t\t\t" << "|       " << barang[i].kode << "\t\t" << barang[i].nama << "\t\t " << barang[i].stock << "\t\t " << barang[i].lokasi << "     |" << endl;

	}

	cout << endl;

	cout << "\t\t\t" << "===================================================================" << endl;

	for (i = 0; i < n; i++) {

		for (b = 0; b < n - 1; b++) {

			if (barang[b].kode > barang[b + 1].kode) {

				temp.kode = barang[b].kode;

				barang[b].kode = barang[b + 1].kode;

				barang[b + 1].kode = temp.kode;



				strcpy(temp.nama, barang[b].nama);

				strcpy(barang[b].nama, barang[b + 1].nama);

				strcpy(barang[b + 1].nama, temp.nama);



				temp.stock = barang[b].stock;

				barang[b].stock = barang[b + 1].stock;

				barang[b + 1].stock = temp.stock;





				strcpy(temp.lokasi, barang[b].lokasi);

				strcpy(barang[b].lokasi, barang[b + 1].lokasi);

				strcpy(barang[b + 1].lokasi, temp.lokasi);

			}

		}

	}

	cout << endl;





	cout << endl;



	cout << "\t\t\t" << "Setelah data diurutkan berdasarkan kode terkecil : " << endl;

	cout << "\t\t\t" << "====================================================================" << endl;

	cout << "\t\t\t" << "|  Kode Barang  |  Nama Barang  |  Stock Barang  |  Lokasi Barang  |" << endl;

	cout << "\t\t\t" << "====================================================================" << endl;

	for (b = 0; b < n; b++) {

		cout << "\t\t\t" << "|      " << barang[b].kode << "\t\t" << barang[b].nama << "\t\t" << barang[b].stock << "\t\t" << barang[b].lokasi << "       |" << endl;

	}

	cout << "\t\t\t" << "====================================================================" << endl;



	lgs:

	cout << endl;

	cout << "\t\t\t" << "Masukan Kode Barang Untuk Mencari : ";

	cin >> cari;

	ada = 0;

	for (b = 0; b < n; b++)

	{

		if (barang[b].kode == cari)

		{

			ada = 1;



			cout << "\t\t\t" << "====================================================================" << endl;

			cout << "\t\t\t" << "|      Kode Barang     |       Stock Barang    |       Lokasi      |" << endl;

			cout << "\t\t\t" << "====================================================================" << endl;

			cout << "\t\t\t" << "|         " << barang[b].kode << "\t\t        " << barang[b].stock << "\t\t       " << barang[b].lokasi << "        |" << endl;

		}

	}

	cout << "\t\t\t" << "====================================================================" << endl;

	if (ada == 0)

	{

		cout << "Data Tidak ditemukan" << endl;
		
		goto lgs;

	}
	
	cout << "Input data Penjualan";
    cout << "Masukkan berapa bulan: ";
	cin >> bln;
    if(bln>0){
        cout << jumlahRekursif(cari-1, 0);
    }else{
        return 0;
    }
	getch();
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
