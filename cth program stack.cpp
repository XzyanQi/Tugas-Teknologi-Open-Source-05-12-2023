#include <iostream>
#define max_stack3  // deklarasi max_stack
using namespace std;

typedef struct STACK // deklarasi stack dengan struct dan array data
{
	int top;
	int data[3];
};
STACK tumpuk; //buat variable type struct

void inisialisasi () // untuk menentukan nilai awal
{
	tumpuk.top = -1;
}

int isfull()
{
	if (tumpuk.top == MAX_STACK-1)
	return 1;
	else
	return 0;
}
int isempty  (){
	if (tumpuk.top == -1)
	return 1;
	else
	return 0;
}

int push (int d) { // memasukkan data
if (isempty () == 1) { // jika data masih kosong
tumpuk.top ++;
tumpuk.data [tumpuk.top] = d;
cout << "data" << tumpuk.data[tumpuk.top] <<" masuk ke stack\n";
}
else if (isfull() == 0) { //jika data belum penuh
tumpuk.top ++;
tumpuk.data [tumpuk.top] = d;
cout << "data" << tumpuk.data[tumpuk.top] <<" masuk ke stack\n";
}
else{
	cout<< "data stack sudah penuh";
}
}

int push2 (int d) { //
if(isfull() == 1) { // jika data penuh
cout <<"data stack sudah penuh";
}
else { //jika data belum penuh
tumpuk.top ++;
tumpuk.data [tumpuk.top] = d;
cout << "data" << tumpuk.data[tumpuk.top] <<" masuk ke stack\n";
}
}

void pop(){
	if (isempty() == 0) { // mengambil data paling atas
	cout<<"data teratas sudah terambil\n";
	tumpuk.top--;
	}else{
		cout<<"data kosong \n";
	}
}

void tampilstack (){
	if(isempty() == 0) { //jika tidak kosong, tampilkan
	for(int i=tumpuk.top; i>=0; i--){
		coutt<<"\ntumpukan ke "<< i + 1 << "=" << tumpuk.data[i];
	}
	}
	else{
		cout<<"tumpukan kosong\n";
	}
}

void bersih(){
	tumpuk.top = -1;
	cout<<"tumpukan kosong!\n";
}



int changearray(int ubahdata, int posisi ){
	if(isempty()){
		cout<< "data kosong!!" <<endl;
	}else{
		int index = tumpuk.top;
		for(int i = 0; i <posisi; i++){
			index--; //indeks hitung mundur dari top ke bawah
		}
		tumpuk.data[index] = ubahdata; // data indeks ke-n diubah
		cout<<"data indeks ke "<<posisi<<"berhasil diubah";
		tampil stack();
	}
}

int hitungarray(){
	if(isempty() ){
		return 0;
	}else{
		return tumpuk.top+1;
	}
}

void peekarray(int posisi){
	if(isempty () ){
		cout<<" data kosong!!" <<endl;
	}else{
		int index= tumpuk.top;
		for( int i = 0; i < posisi; i++){
			index--; //indeks hitung mundur dari top ke bawah
		}
		cout<<"data posisi ke-" <<posisi<<":"<<tumpuk.data[index]<<endl;
	}
}