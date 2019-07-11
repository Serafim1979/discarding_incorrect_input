#include<iostream>

using std::cout;
using std::cin;
using std::endl;
///////////////////////////////////////////
const int Max = 5;
///////////////////////////////////////////
int main()
{
	int golf[Max];
	cout << "Please enter your golf scores.\n";
	cout << "You must enter " << Max << " rounds.\n";
	int i;

	for (i = 0; i < Max; i++)
	{
		cout << "round #" << i + 1 << ":";
		while (!(cin >> golf[i]))
		{
			cin.clear();

			while (cin.get() != '\n')
				continue;                       //discarding incorrect input
			cout << "Please enter a number: ";
		}
	}

	double total = 0.0;
	for (i = 0; i < Max; i++)
	{
		total += golf[i];
	}

	cout << total / Max << " = average score " << Max << " rounds\n";

	system("pause");
	return 0;
}