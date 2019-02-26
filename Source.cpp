// Header
#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

int main()
{
	ofstream outfile;
	outfile.open("output.txt");
	outfile << "Matthew\n\n";

	int count = 1;
	while (count <= 5)
	{
		int selection;

		cout << "Which formula do you want to see?\n\n";
		cout << "1. Area of a circle\n";
		cout << "2. Area of a rectangle\n";
		cout << "3. Volume of a cylinder\n";
		cout << "4. None of them!\n";
		cin >> selection;

		switch (selection)
		{
		case 1:
			break;
			cout << "Pi times radius squared\n";
		case 2:
			cout << "Length times width\n";
			break;
		case 3:
			cout << "Pi times radius squared times height\n";
			break;
		case 4:
			cout << "Well okay then...Goodbye!\n";
			break;
		default:
			cout << "Not good with numbers, eh?\n";
		}

		count += 1;
	}

	outfile.close();
	system("pause");
	return 0;
}