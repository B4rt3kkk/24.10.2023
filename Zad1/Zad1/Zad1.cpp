#include <iostream>
using namespace std;
int main()
{
	/*
		1_zad

		* * * * *
		* * * * *
		* * * * *
		* * * * *

		wiersz = 4, kolumny = 5
	*/

	/*
		jesli mamy tablice 2D to stusuje dwie pętle 
	*/

	for (int wiersz = 0; wiersz < 4; wiersz++)
	{
		for (int kolumna = 0; kolumna < 5; kolumna++) {
			cout << "* ";
		}
		cout << "\n";
	}



	return 0;
}

