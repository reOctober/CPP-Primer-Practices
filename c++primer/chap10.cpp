#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <list>
#include <numeric>
#include <functional>
#include <iterator>
#include <fstream>

//PRAC 10.1
//int main()
//{
//	int i, n = 1;
//	std::vector<int> vec;
//	while (std::cin >> i)
//	{
//		vec.push_back(i);
//	}
//	int x = std::count(vec.begin(), vec.end(), n);
//	std::cout << x << std::endl;
//}

//PRAC 10.2
//int main()
//{
//	std::string str;
//	std::list<std::string> lst;
//
//	while (std::cin >> str)
//		lst.push_back(str);
//	int i = count(lst.begin(), lst.end(), "Oct");
//	std::cout << i << std::endl;
//}

//PRAC 10.3
//int main()
//{
//	int i;
//	std::vector<int> vec;
//	while (std::cin >> i)
//		vec.push_back(i);
//	std::cout << std::accumulate(vec.begin(), vec.end(), 0) << std::endl;
//}

//PRAC 10.6
//int main()
//{
//	std::vector<int> vec(10);
//	std::fill_n(vec.begin(), 10, 1);
//	for (auto& x : vec)
//	{
//		std::cout << x << std::endl;
//	}
//}

//PRAC 10.9
//int main()
//{
//	std::vector<std::string> vec{ "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle" };
//
//	std::sort(vec.begin(), vec.end());
//
//	std::vector<std::string>::iterator end_unique = std::unique(vec.begin(), vec.end());
//
//	vec.erase(end_unique, vec.end());
//
//	for (auto& x : vec)
//		std::cout << x << "\t";
//}

//PRAC 10.11
//void elimDups(std::vector<std::string>&);
//bool isShorter(const std::string& a, const std::string& b);
//
//int main()
//{
//	std::vector<std::string> vec{ "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle" };
//
//	elimDups(vec);
//	std::stable_sort(vec.begin(), vec.end(), isShorter);
//
//	for (auto& x : vec)
//		std::cout << x << "\t";
//}
//
//void elimDups(std::vector<std::string>& vec)
//{
//	std::sort(vec.begin(), vec.end());
//
//	std::vector<std::string>::iterator end_unique = std::unique(vec.begin(), vec.end());
//
//	vec.erase(end_unique, vec.end());
//}
//
//bool isShorter(const std::string& a, const std::string& b)
//{
//	return a.size() < b.size();
//}

//PRAC 10.13
//bool SplitWords(std::string&);
//
//int main()
//{
//	std::vector<std::string> vec{ "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle" };
//
//	std::vector<std::string>::iterator iter = std::partition(vec.begin(), vec.end(), SplitWords);
//
//	for (auto i = vec.begin(); i != iter ; ++i)
//	{
//		std::cout << *i << ' ';
//	}
//}
//
//bool SplitWords(std::string& str)
//{
//	return str.size() >= 5;
//}

//PRAC 10.14
//int main()
//{
//	auto f = [](int x, int y){return x + y; };
//}

//PRAC 10.15
//void func(int i)
//{
//	[i](int j) {return i + j; };
//}

//PRAC 10.16; 10.8; 10.19
//void elimDups(std::vector<std::string>&);
//void Biggies(std::vector<std::string>&, std::vector<std::string>::size_type);
//int main()
//{
//	std::vector<std::string> vec{ "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle" };
//
//	Biggies(vec, 5);
//}
//
//void elimDups(std::vector<std::string>& vec)
//{
//	std::sort(vec.begin(), vec.end());
//
//	std::vector<std::string>::iterator end_unique = std::unique(vec.begin(), vec.end());
//
//	vec.erase(end_unique, vec.end());
//}
//
//void Biggies(std::vector<std::string>& vec, std::vector<std::string>::size_type sz)
//{
//	elimDups(vec);
//
//	std::stable_sort(vec.begin(), vec.end(), [](const std::string& a, const std::string& b) { return a.size() < b.size(); });
//
//	std::vector<std::string>::iterator iter = std::stable_partition(vec.begin(), vec.end(), [sz](const std::string& str) {return str.size() >= sz; });
//
//	for (auto& x : vec)
//		std::cout << x << ' ';
//
//	std::cout << std::endl;
//
//	for (auto i = vec.begin(); i != iter; ++i)
//		std::cout << *i << ' ';
//}

//PRAC 10.20
//int main()
//{
//	std::vector<std::string> vec{ "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle" };
//
//	int i = std::count_if(vec.begin(), vec.end(), [](const std::string& str) -> int { return str.size() > 5; });
//
//	std::cout << i << std::endl;
//}

//PRAC 10.21
//int main()
//{
//	int x = 5;
//	auto i = [&x]() -> bool {
//		return (x == 0 ? true : !(--x)); };
//	while (!i())
//		std::cout << x << std::endl;
//}

//PRAC 10.22
//#include <functional>
//
//bool IsLesser(const std::string&, std::string::size_type);
//
//int main()
//{
//	std::vector<std::string> vec{ "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle" };
//
//	_int64 i = std::count_if(vec.cbegin(), vec.cend(), std::bind(IsLesser, std::placeholders::_1, 4));
//	std::cout << i << std::endl;
//}
//
//bool IsLesser(const std::string& str, std::string::size_type sz)
//{
//	return str.size() <= sz;
//}

//PRAC 10.24
//bool check_size(const std::string&, std::string::size_type);
//
//int main()
//{
//	std::vector<int> vec{ 0, 1, 2, 3, 4, 5, 6, 7 };
//	std::string str{ "123456" };
//	auto i = std::find_if(vec.begin(), vec.end(), std::bind(check_size, str, std::placeholders::_1));
//	std::cout << *i << std::endl;
//}
//
//bool check_size(const std::string& str, std::string::size_type sz)
//{
//	return str.size() < sz;
//}

//PRAC 10.27
//int main()
//{
//	std::vector<std::string> vec{ "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle" };
//	std::list<std::string> lst;
//	
//	std::sort(vec.begin(), vec.end());
//
//	std::unique_copy(vec.begin(), vec.end(), std::back_inserter(lst));
//
//	for (auto& x : lst)
//		std::cout << x << ' ';
//}

//PRAC 10.28
//void Out(const std::list<int>&);
//
//int main()
//{
//	std::vector<int> vec{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	std::list<int> vec1, vec2, vec3;
//
//	std::copy(vec.cbegin(), vec.cend(), inserter(vec1, vec1.begin()));
//	Out(vec1);
//
//	std::copy(vec.cbegin(), vec.cend(), back_inserter(vec2));
//	Out(vec2);
//
//	std::copy(vec.cbegin(), vec.cend(), front_inserter(vec3));
//	Out(vec3);
//}
//
//void Out(const std::list<int>& lst)
//{
//	for (auto& x : lst)
//	{
//		std::cout << x << ' ';
//	}
//	std::cout << std::endl;
//}

//PRAC 10.29
//int main()
//{
//	std::vector<std::string> vec;
//	std::ifstream ifs("./asd.txt");
//	std::istream_iterator<std::string> in(ifs), eof;
//
//	std::copy(in, eof, back_inserter(vec));
//
//	std::copy(vec.cbegin(), vec.cend(), std::ostream_iterator<std::string>(std::cout, "\n"));
//}

//PRAC 10.30
//int main()
//{
//	std::istream_iterator<int> in(std::cin), eof;
//	std::vector<int> vec;
//
//	std::copy(in, eof, back_inserter(vec));
//	sort(vec.begin(), vec.end());
//
//	std::copy(vec.cbegin(), vec.cend(), std::ostream_iterator<int>(std::cout, "\n"));
//}

//PRAC 10.31
//int main()
//{
//	std::istream_iterator<int> in(std::cin), eof;
//	std::vector<int> vec;
//
//	std::copy(in, eof, back_inserter(vec));
//	sort(vec.begin(), vec.end());
//
//	std::unique_copy(vec.cbegin(), vec.cend(), std::ostream_iterator<int>(std::cout, "\n"));
//}

//PRAC 10.33
//void ReadandWrite(std::ifstream&, std::ofstream&, std::ofstream&);
//
//int main()
//{
//	std::ifstream in("./int.txt");
//	std::ofstream odd("./odd.txt");
//	std::ofstream even("./even.txt");
//
//	ReadandWrite(in, odd, even);
//}
//
//void ReadandWrite(std::ifstream& in, std::ofstream& odd, std::ofstream& even)
//{
//	std::istream_iterator<int> read(in), eof;
//	std::ostream_iterator<int> write_odd(odd, " ");
//	std::ostream_iterator<int> write_even(even, "\n");
//	for (read; read != eof; ++read)
//	{
//		if (*read % 2 == 1)
//		{
//			write_odd = *read;
//		}
//		else
//		{
//			write_even = *read;
//		}
//	}
//}

//PRAC 10.34; 10.35
//int main()
//{
//	std::vector<int> vec{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	for (std::vector<int>::const_reverse_iterator reit = vec.crbegin(); reit != vec.crend(); ++reit)
//	{
//		std::cout << *reit << ' ';
//	}
//	std::cout << std::endl;
//
//	for (std::vector<int>::iterator it = vec.end()-1; it != vec.begin()-1; --it)
//	{
//		std::cout << *it << ' ';
//	}
//	std::cout << std::endl;
//}

//PRAC 10.36
//int main()
//{
//	std::list<int> lst{ 1, 2, 10, 4, 0, 23, 2 };
//	std::list<int>::const_reverse_iterator i = std::find(lst.crbegin(), lst.crend(), 0);
//	std::cout << std::distance(i, lst.crend() ) << std::endl;
//}

//PRAC 10.37
//int main()
//{
//	std::vector<int> vec{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	std::list<int> lst;
//
//	std::copy(vec.crbegin() + 2 , vec.crend() - 3, back_inserter(lst));
//
//	for (auto& x : lst)
//		std::cout << x << ' ';
//}