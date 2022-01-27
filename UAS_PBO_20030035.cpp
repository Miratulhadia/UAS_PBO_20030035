#include <iostream>
#include <conio.h>
using namespace std;

class bangun_ruang
{
	public :
		int sisi;
		int luas;
		double volume;
		
	void luas_bujursangkar(){
		cout<<endl;
		cout<<"Menghitung Luas Kubus"<<endl;
		cout<<"Diketahui : Sisi = ";cin>>sisi;
		cout<<endl;
		luas = sisi * sisi;
		cout<<"Ditanyakan : Luas Kubus = "<<luas<<endl;
	}
	
	void volume_kubus(){
		cout<<endl;
		cout<<"Menghitung Volume Kubus"<<endl;
		cout<<"Diketahui : Sisi = ";cin>>sisi;
		volume = sisi * sisi * sisi;
		cout<<"Ditanyakan : Volume Kubus = "<<volume<<endl;
	}
		
	void luas_bujursangkar_volume_kubus(){
		cout<<endl;
		cout<<"Menghitung Luas Bujursangkar dan Volume Kubus"<<endl;
		cout<<"Diketahui : Sisi = ";cin>>sisi;
		luas = sisi * sisi;
		volume = sisi * sisi * sisi;
		cout<<"Ditanyakan : "<<endl;
		cout<<"1. Luas Bujur sangkar = "<<luas<<endl;
		cout<<"2. Volume Kubus = "<<volume<<endl;
	}
};

int main(){
	int pilih;
	awal :
	cout<<"\nMenghitung Kubus\n";
	cout<<"1. Luas Bujursangkar\n";
	cout<<"2. Volume Kubus\n";
	cout<<"3. Luas Bujursangkar dan Volume Kubus\n";
	cout<<"Masukkan Menu Yang Anda Ingin Cari [0.1.2.3]: ";cin>>pilih;
	bangun_ruang nya;
	
	if(pilih==1)
	{
	nya.luas_bujursangkar();
	goto awal;
	}
	else if(pilih==2)
	{
	nya.volume_kubus();
	goto awal;
	}
	else if(pilih==3)
	{
	nya.luas_bujursangkar_volume_kubus();
	goto awal;
	}
	else
	{
		cout<<"Menu yang Anda Masukkan Tidak Terdaftar";
	}
	system("pause");
	
	return 0;
}

