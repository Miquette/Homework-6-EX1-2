////////////////////////
// Miquette Orren
// CS172 HW6
// Exercise 13.1
///////////////////////

#include <iostream>
#include <string>
#include <fstream>
#include <ctime>
using namespace std;


int main()
{
	srand(time(NULL));
	int a;

	ofstream fout("\\\\CS1\\2019\\morren19\\CS172-1\\Homeworks\\HW6\\Ex06_01\\Ex06_01.txt");
	for (int x = 0; x < 100; x++)
	{
		a = rand() % 100;
		fout << a << "\t";
	}


	if (fout.fail())
	{
		cout << "Cannot open the file." << endl;
		return 0;
	}
	else
		cout << "Good" << endl;

	fout.close();

	return 0;
}