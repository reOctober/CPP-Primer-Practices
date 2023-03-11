#include <iostream>
#include <string>
#include <vector>
#include <fstream>

//PRAC 8.1
//std::istream& Read(std::istream&);
//
//int main()
//{
//	std::istream& is = Read(std::cin);
//	//Read(std::cin);
//	std::cout << is.rdstate() << std::endl;
//}
//
//std::istream& Read(std::istream& is)
//{
//	std::string str;
//	while (is >> str)
//	{
//		std::cout << str << std::endl;
//	}
//	is.clear();
//	return is;
//}

//PRAC 8.4
//void ReadToVec(std::string&, std::vector<std::string>&);
//
//int main()
//{
//	std::string filename = "asd.txt";
//	std::vector<std::string> vec;
//	ReadToVec(filename, vec);
//}
//
//void ReadToVec(std::string& filename, std::vector<std::string>& vec)
//{
//	std::ifstream ifs(filename);
//	if (ifs)
//	{
//		std::string buff;
//		while (getline(ifs, buff))
//		{
//			vec.push_back(buff);
//			std::cout << buff << std::endl;
//		}
//	}
//}

//PRAC 8.5
//void ReadToVec(std::string);
//
//int main()
//{
//	ReadToVec("asd.txt");
//}
//
//void ReadToVec(std::string filename)
//{
//	std::ifstream ifs(filename);
//	std::vector<std::string> vec;
//	if (ifs)
//	{
//		std::string buff;
//		while (ifs >> buff)
//		{
//			vec.push_back(buff);
//			std::cout << buff << std::endl;
//		}
//	}
//}

//PRAC 8.10
//#include <sstream>
//
//int main()
//{
//	std::ifstream ifs("asd.txt");
//	std::vector<std::string> vec;
//	if (ifs)
//	{
//		std::string buff;
//		while (getline(ifs, buff))
//		{
//			vec.push_back(buff);
//		}
//	}
//
//	for (auto& x : vec)
//	{
//		std::istringstream iss(x);
//		std::string word;
//		while (iss >> word)
//			std::cout << word << std::endl;
//	}
//}
