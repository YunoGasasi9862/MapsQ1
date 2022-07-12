#include <iostream>
#include <vector>
#include <map>

void Election2019(std::vector<char> Party,  std::vector<int> seat, int N)
{
	std::map<char, int> Map;
	for (int i = 0; i < N; i++)
	{
		Map.insert(std::pair<char, int>(Party[i], seat[i]));
		
	}
	int Max=seat[0];
	for (auto itr = Map.begin(); itr != Map.end(); itr++)
	{

		std::cout << itr->first << " " << itr->second << std::endl;
		if (Max < itr->second)
		{
			Max = itr->second;
		}
	}
	std::cout << Max << std::endl;

}
int main(void)
{
	std::vector<char> Party = { 'A', 'B', 'C', 'D', 'E', 'F', 'G' };
	std::vector<int> seats = { 90,150,33,23,17,500,2 };

	Election2019(Party, seats, 7);


	return 0;
}