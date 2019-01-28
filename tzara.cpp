#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::vector<std::string> words;
	std::string var;
	int wordcounter = 0;
	int randomnumber;
	int numoberfwords;

	for (int i = 0; ; ++i)
	{
		std::cin >> var;
		if (var == "~")
			break;
		else
		{
			words.push_back(var);
			++wordcounter;
		}
	}

	int i = wordcounter;
	while (1)
	{
		if (i == 1)
		{
			std::cout << words[0];
			break;
		}
		numoberfwords = rand() % i;

		if (numoberfwords >= i)
			numoberfwords = i;

		i = i - numoberfwords;

		for (int counter = 0; counter < numoberfwords; ++counter)
		{
			randomnumber = rand() % wordcounter;
			std::cout << words[randomnumber] << " ";
			words.erase(words.begin() + randomnumber);
			--wordcounter;
		}
		std::cout << "\n";
		if (i <= 0)
			break;
	}

	std::cout << "\n";
}
