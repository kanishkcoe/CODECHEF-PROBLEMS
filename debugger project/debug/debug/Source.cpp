#include <iostream>
#include <string>

using namespace std;

int isChef(char);
int countChef(string);

int main()
{
	int T;  //test counter

	string s; //input string
	int *output;  //saves the outputs
	char buffer;  //nullifies the newline after int input

	cin >> T;
	cin >> buffer;

	output = new int[T];

	for (int i = 0; i < T; i++)
	{
		getline(cin, s);
		output[i] = countChef(s);
	}

	for (int i = 0; i < T; i++)
	{
		if (output[i] == 0)
		{
			cout << "normal" << endl;
		}
		else
		{
			cout << "lovely" << output[i] << endl;
		}
	}
	return 0;
}

int isChef(char c)
{
	switch (c)
	{
	case 'c':
	case 'h':
	case 'e':
	case 'f': return 1;
	}
	return 0;
}

int countChef(string s)
{
	int i = 0;  //string iterator
	string word;  //a temporary string that will store the occurence of the chef combination
	int count = 0;

	while (i < s.length())
	{
		word = "";

		if (isChef(s[i]))
		{
			word.append(1, s[i]);
			if (word.find(s[i + 1]) > word.length() && isChef(s[i + 1]))
			{
				word.append(1, s[i + 1]);
				if (word.find(s[i + 2]) > word.length() && isChef(s[i + 2]))
				{
					word.append(1, s[i + 2]);
					if (word.find(s[i + 3]) > word.length() && isChef(s[i + 3]))
					{
						word.append(1, s[i + 3]);
						if (isChef(s[i + 4]))
						{
							i++;
						}
						else
						{
							i += 5;
						}
						count++;
					}
					else
					{
						i += 4;
					}
				}
				else
				{
					i += 3;
				}
			}
			else
			{
				i += 2;
			}
		}
	}
	return count;
}
