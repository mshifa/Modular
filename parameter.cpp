 #include <iostream>
using namespace std;

//prottype
int tambahkan(int a, int b);

// variabel global
	int a,b;

// program utama
int main () {
		cout <<"masukan nilai a : ";
		cin >> a;
		cout <<"masukan nilai b : ";
		cin >> b;
		cout << "hasil : " << tambahkan (a, b) << endl;
		return 0;
}

	int tambahkan (int a, int b) {
		return a + b;
	}