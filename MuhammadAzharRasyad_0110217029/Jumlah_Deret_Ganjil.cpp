// Algoritma Jumlah Deret Ganjil
#include <iostream>

using namespace std;

// Fungsi Jumlah Deret Ganjil
int Jumlah_Deret_Ganjil (int n)
{
	// Proses
	if (n == 1) // Proses Rumus Jumlah Deret Ganjil
		return 1;
	else if (n > 1) // Proses Jumlah Deret Ganjil
		return (2 * n) - 1 + Jumlah_Deret_Ganjil(n-1);
}

	/* 
 	Contoh Penjelasan Algoritma :

	Dengan Ketentuan | n >= 1 |
	Jika Nilai n = 3

	Maka nilai n dimasukkan kedalam fungsi Jumlah_Deret_Ganjil(n)

	Jumlah_Deret_Ganjil(n) = (2 * n) - 1 + Jumlah_Deret_Ganjil(n-1)

	Berikut Penjelasannya :
	Jumlah_Deret_Ganjil(3) = (2 * 3) - 1 + Jumlah_Deret_Ganjil(3-1)
	Jumlah_Deret_Ganjil(3) = (2 * 3) - 1 + Jumlah_Deret_Ganjil(2)
	Jumlah_Deret_Ganjil(3) = (6) - 1 + Jumlah_Deret_Ganjil(2)
	Jumlah_Deret_Ganjil(3) = 5 + Jumlah_Deret_Ganjil(2)

	Karena Jumlah_Deret_Ganjil(2) tidak diketahui maka harus dicari terlebih dahulu dengan fungsi Jumlah_Deret_Ganjil(n)
	
	Jumlah_Deret_Ganjil(2) = (2 * 2) - 1 + Jumlah_Deret_Ganjil(2-1)
	Jumlah_Deret_Ganjil(2) = (2 * 2) - 1 + Jumlah_Deret_Ganjil(1)
	Jumlah_Deret_Ganjil(2) = (4) - 1 + Jumlah_Deret_Ganjil(1)
	Jumlah_Deret_Ganjil(2) = 3 + Jumlah_Deret_Ganjil(1)

	Dari ketentuan yang berlaku pada rumus deret jika n = 1 maka hasilnya adalah 1

	Jumlah_Deret_Ganjil(1) = 1
	Jumlah_Deret_Ganjil(2) = 3 + Jumlah_Deret_Ganjil(1)
	Jumlah_Deret_Ganjil(2) = 3 + 1
	Jumlah_Deret_Ganjil(2) = 4
		
	Jika Jumlah_Deret_Ganjil(2) sudah diketahui maka Jumlah_Deret_Ganjil(3) dapat diketahui

	Jumlah_Deret_Ganjil(2) = 4
	Jumlah_Deret_Ganjil(3) = 5 + Jumlah_Deret_Ganjil(2)
	Jumlah_Deret_Ganjil(3) = 5 + 4
	Jumlah_Deret_Ganjil(3) = 9

	Maka Hasil Jumlah Deret Ganjil Nilai n = 3 Adalah 9
	*/


/// Program Utama
int main()
{	
	// Deklarasi
	int n,i,j,k;

	cout << "---------- Algoritma Jumlah Deret Ganjil ----------" << endl << endl;

	// Input
	cout << "Dengan Ketentuan | n >= 1 |" << endl; // Ketentuan Bilangan Deret
	cout << "Masukkan Nilai n = ";
	cin >> n;

	// Verifikasi
	if (n < 1)
		cout << "\nError Masukkan Nilai n >= 1" << endl;
	else
	{
		// Output
		cout << "\nBerikut Jumlah Deret Ganjil(n) : " << endl;
		cout << "Proses Jumlah Deret Ganjil(" << n << ") = ";
		
		k = -1;
		for (i = 0; i < n; i++) // Output Perulangan Proses Deret
		{
			k = k + 2;
			cout << k;

			if ((i + 1) == n)
			{
				cout << "";
			}
			else
				cout << " + ";
		}		
		cout << endl << endl;

		for (i = 0; i < n; i++)
		{
			cout << "Jumlah Deret Ganjil n = " << i + 1 << " Adalah ";
			for (j = 0; j <= i; j++)
			{
				if (i + 1 == 1)
					cout << "Dari Rumus";
				else
				{
					k = k + 2;
					cout << k;

					if (j + 1 == i + 1)
						cout << "";
					else
						cout << " + ";
				}
			}
			k = -1;
			cout << " = " << Jumlah_Deret_Ganjil(n-(n-(i+1))) << endl;
		}

		cout << "\nJumlah Deret Ganjil(" << n << ") = " << Jumlah_Deret_Ganjil(n) << endl; // Output Hasil Jumlah Deret Ganjil Dari Nilai n
	}
}
