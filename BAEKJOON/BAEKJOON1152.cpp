#include <iostream>
#include <string>
using namespace std;

int main()
{
	string data;
	getline(cin, data);
	int len = data.length();

	int count = 1;

	for (int i = 0; i < len; i++)
	{
		if (data[i] == ' ')
			count++;
	}

	if (data[0] == ' ') count--;
	if (data[len - 1] == ' ') count--;

	cout << count;
	return 0;
}