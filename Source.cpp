#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>

using namespace std;

int main() {
	ofstream output;
	output.open("output.txt", ios::out);
	double x, y = 0;
	double temp=0;
	for (x = -5; x < 5; x++) {
		for (y = -5; y < 5; y++) {
			temp = (4 / (pow((x - 2), 2) + pow((y - 2), 2) + 1)) + (3 / (pow((x - 2), 2) + pow((y + 2), 2) + 1)) + (2 / (pow((x + 2), 2) + pow((y - 2), 2) + 1));
			cout << "x=\t" << x << "\t" << "y=\t" << y << "\t" << "temp=\t" << temp << endl;
			output<< "x=\t" << x << "\t" << "y=\t" << y << "\t" << "temp=\t" << temp << endl;
		}
	}
	output.close();
	

	system("pause");
	return 0;
	}