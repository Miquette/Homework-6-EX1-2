#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
	string line;
	int count = 0;
	ifstream fin("\\\\cs1\\2019\\morren19\\CS172-1\\Homeworks\\HW6\\Ex06_01.txt");

	if (fin.is_open())
	{
		while (!fin.eof())
		{
			getline(fin, line);
			count += line.length();
			cout << count << endl;
		}
		
	}

	fin.close();

	return 0;
}