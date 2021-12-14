#include <iostream>
#include <cmath>
using namespace std;

int main(){

	
	string Nama,Golongan_Darah;
	float Berat_Badan;
	float Tinggi_Badan;
	float berat_ideal,berat_ideal2;
	
	//input//
	cout<<"Nama\t\t\t:";
	getline(cin,Nama);
	cout<<"Golongan Darah\t\t:";
	getline(cin,Golongan_Darah);
	cout<<"Berat Badan\t\t:";
	cin>>Berat_Badan;
	cout<<"Tinggi Badan\t\t:";
	cin>>Tinggi_Badan;
	cout<<"                       "<<endl;
	//output//
	cout<<"----------------------------------------------"<<endl;
	cout<<"Nama\t\t\t:"<<Nama<<endl;
	cout<<"Golongan Darah\t\t:"<<Golongan_Darah<<endl;
	cout<<"Berat Badan\t\t:"<<Berat_Badan<<"kg"<<endl;
	cout<<"Tinggi Badan\t\t:"<<Tinggi_Badan<<"cm"<<endl;
	cout<<"Berat Badan Ideal\t:"<<Tinggi_Badan<<"-100"<<" - "<<"("<<Tinggi_Badan<<"-100)"<<"*0.15="<<berat_ideal2<<endl;

    return 0;
}
	
