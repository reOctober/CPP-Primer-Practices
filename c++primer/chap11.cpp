#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <list>
#include <utility>

//PRAC 11.3
//int main()
//{
//	std::map<std::string, size_t> map;
//	std::string str;
//	while (std::cin >> str)
//		++map[str];
//
//	for (const auto& x : map)
//		std::cout << x.first << ' ' << x.second << std::endl;
//}

//PRAC 11.4
//int main()
//{
//	std::map<std::string, size_t> map;
//	std::string str;
//	while (std::cin >> str)
//	{
//		for (auto& x : str)
//			x = tolower(x);
//
//		str.erase( std::remove_if(str.begin(), str.end(), ispunct) );
//
//		++map[str];
//	}
//
//	for (const auto& x : map)
//		std::cout << x.first << ' ' << x.second << std::endl;
//}

//PRAC 11.7
//void AddFamily(std::map<std::string, std::vector<std::string>>&);
//void AddChild(std::map<std::string, std::vector<std::string>>&);
//
//int main()
//{
//	std::map<std::string, std::vector<std::string>> Family;
//
//	AddChild(Family);
//
//	for (auto& x : Family)
//	{
//		std::cout << x.first << ':' << std::endl;
//		for (auto& y : x.second)
//			std::cout << y << ' ';
//		std::cout << std::endl;
//	}
//}
//
//void AddChild(std::map<std::string, std::vector<std::string>>& family)
//{
//	std::string str1, str2;
//	while (std::cin >> str1 >> str2)
//	{
//		family[str1].push_back(str2);
//	}
//}

//PRAC 11.9
//int main()
//{
//	std::map<std::string, std::list<int>> Map{ {"Oct",{ 1, 2, 3} },
//											   {"Chen",{ 2, 3, 4} } };
//}

//PRAC 11.12; 11.13
//int main()
//{
//	std::vector<std::pair <std::string, int>> vec;
//	std::pair <std::string, int> p;
//	std::string str;
//	int i;
//	while (std::cin >> str >> i)
//		vec.push_back( std::pair<std::string, int>(str, i));
//		//vec.push_back({ str, i });
//		//vec.push_back(std::make_pair(str, i));
//	for (auto& x : vec)
//	{
//		std::cout << x.first << ' ' << x.second << std::endl;
//	}
//}

