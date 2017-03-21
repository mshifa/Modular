 #include <iostream>
using namespace std;
  
//prototype
void prosesBaca();
int prosesTambah();
int prosesKurang();
void prosesTampil();

// variabel global
	int a,b;
	
// program utama
int main(){
		prosesBaca();
		prosesTampil();
		return 0;
		}
		
// proses baca
void prosesBaca () {

		cout <<"masukan nilai a : ";
		cin >> a;
		cout <<"masukan nilai b : ";
		cin >> b;
		}
		
// proses tambah 
int prosesTambah() {
	return a+b;
}

// proses kurang
int prosesKurang (){
	int hasil;
	hasil = a - b;
 	return hasil;
}	

//proses tampil 
void prosesTampil(){

	cout << "hasil tambah : " << prosesTambah() << endl;
	cout << "hasil kurang : " << prosesKurang() << endl;
}	