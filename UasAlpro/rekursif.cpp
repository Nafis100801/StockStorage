#include <iostream>

#include <conio.h>

#include <stdio.h>

#include<stdlib.h>

#include <string.h>


using namespace std;
int n, i, b, cari, ada,bln;
int jumlahRekursif(int x, int a){
    	cout << "jumlah penjualan: ";
    cin >> a;
    if (x==0){
        return a;
    }
	else{
        return a + jumlahRekursif(x-1,a);
    }
}
int main(){

cout << "Masukkan berapa bulan: ";
cin >> bln;
    if(bln>0){
        cout << jumlahRekursif(bln-1, 0);
    }else{
        return 0;
    }
	getch();
}


