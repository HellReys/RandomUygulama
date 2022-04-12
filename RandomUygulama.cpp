#include <iostream>
#include <stdlib.h>
#include <time.h>


using namespace std;

int main()
{

	int kullanici, rastgele;

	cout << "Lutfen Tahminizi Giriniz(1 ile 10 arasinda)..." << endl;

	cin >> kullanici;
	if (kullanici <= 10 && kullanici >= 1)
	{
		srand(time(NULL));
		rastgele = rand() % 10 + 1;

		if (rastgele == kullanici)
		{

			cout << "Tahmininiz Dogru" << endl;
		}
		else
		{
			cout << "Tahmininiz Yanlis" << endl;
			cout << rastgele << endl;
		}


	}

	else
	{
		cout << "Verilen Araliklar Disinda Girdiniz!" << endl;
	}


}