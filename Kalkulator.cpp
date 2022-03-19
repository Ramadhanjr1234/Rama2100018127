#include <iostream>

using namespace std;

int main(){
	float a, b, hasil;
	int pilihan;
	
	cout<<"PROGRAM KALKULATOR\n \n";
	cout<<"Menu Operasi : "<<endl;
	cout<<"  1. Penambahan"<<endl;
	cout<<"  2. Pengurangan"<<endl;
	cout<<"  3. Perkalian"<<endl;
	cout<<"  4. Pembagian"<<endl;
	cout<<"Pilih Menu No : ";
	cin>>pilihan;
	
	//memasukkan input dari user
	cout<<"Masukkan nilai pertama: ";
	cin>> a;
	
	cout<<"Masukkan nilai kedua: ";
	cin>> b;
	
	cout<<"\nHasil perhitungan: ";
	
	if (pilihan == 1){
		hasil = a + b;
	    cout<<a<<"+"<<b<<"="<<hasil;
	}else if (pilihan == 2){
		hasil = a - b;
		cout<<a<<"-"<<b<<"="<<hasil;
	}else if (pilihan == 3){
		hasil = a * b;
		cout<<a<<"*"<<b<<"="<<hasil;
	}else if (pilihan == 4){
		hasil = a / b;
		cout<<a<<"/"<<b<<"="<<hasil;
	}else{
		cout << "Operator anda salah"<<endl;
	}
	
	
	
	
	cin.get();
	return 0;
}
