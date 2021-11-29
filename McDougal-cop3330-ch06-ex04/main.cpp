#include "main.h"
#include "Name_value.h"

int main()
{
	std::string name;
	int score;
	std::vector<Name_value> pairs;

	while (std::cin >> name >> score && (name != "NoName" && score != 0))
	{
		for(int i = 0; i < pairs.size(); i++)
			if (name == pairs[i].name)
			{
				printf("[Error] Duplicate: %s\n", name.c_str());
				return -1;
			}

		pairs.push_back(Name_value(name, score));
	}

	for (int i = 0; i < pairs.size(); i++)
		printf("%s %d\n", pairs[i].name.c_str(), pairs[i].score);

	return 0;
}