#include <string>
#include <vector>
#include <iostream>

using namespace std;

void disemvoweler(string input)
{
	vector<char> vowels;
	vector<char> consonants;

	for (char c : input)
	{
		if (c == 'a' | c == 'e' | c == 'i' | c == 'o' | c == 'u')
			vowels.push_back(c);
		else if (c == ' ')
			;
		else
			consonants.push_back(c);
	}
	
	for (char c : consonants)
		cout << c;
	cout << endl;

	for (char c : vowels)
		cout << c;
	cout << endl;
}

int main()
{
	cout << "Input: ";
	string input;
	getline(cin, input);
	disemvoweler(input);
}