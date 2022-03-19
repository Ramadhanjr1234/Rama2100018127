#include <iostream>

using namespace std;

int main(){
	float a, b, hasil;
	int aritmatika;
	
	cout<<"PROGRAM KALKULATOR\n \n";
	cout<<"Menu Operasi : "<<endl;
	cout<<"  1. Penambahan"<<endl;
	cout<<"  2. Pengurangan"<<endl;
	cout<<"  3. Perkalian"<<endl;
	cout<<"  4. Pembagian"<<endl;
	cout<<"Pilih Menu No : ";
	cin>>aritmatika;
	
	//memasukkan input dari user
	cout<<"Masukkan nilai pertama: ";
	cin>> a;
	
	cout<<"Masukkan nilai kedua: ";
	cin>> b;
	
	cout<<"\nHasil perhitungan: ";
	
	if (aritmatika == 1){
		hasil = a + b;
	    cout<<a<<"+"<<b<<"="<<hasil;
	}else if (aritmatika == 2){
		hasil = a - b;
	}else if (aritmatika == 3){
		hasil = a * b;
	}else if (aritmatika == 4){
		hasil = a / b;
	}else{
		cout << "Operator anda salah"<<endl;
	}
	
	
	
	
	cin.get();
	return 0;
}
