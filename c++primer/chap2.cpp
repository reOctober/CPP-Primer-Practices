#include <iostream>

//int main()
//{
//	unsigned u = 10 , i = 42;
//	int ;
//	std::cout << u - i << std::endl;
//}

//PRAC 2.8
//int main()
//{
//	std::cout << 2 << "\115\12";
//	std::cout << 2 << "\t\115\12";
//}

//PRAC 2.10
//std::string global_str;//全局变量，空字符串
//int global_int;//全局变量，0
//int main()
//
//	int local_int;//局部变量，未初始化，初值未定义
//	std::string local_str;//是string类的对象，值由类确定，为空字符串
//}

//PRAC 2.14
//int main()
//{
//	int i = 100, sum = 0;
//	for (int i = 0; i != 10; ++i)
//	{
//		sum += i;
//		std::cout << i << " " << sum << std::endl;
//	}
//	std::cout << i << " " << sum << std::endl;
//}

//PRAC 2.34
//int main()
//{
//    int i = 0, & r = i;
//    auto a = r;   // a is an int (r is an alias for i, which has type int)
//
//    const int ci = i, & cr = ci;
//    auto b = ci; // b is an int (top-level const in ci is dropped)
//    auto c = cr; // c is an int (cr is an alias for ci whose const is top-level)
//    auto d = &i; // d is an int* (& ofan int objectis int*)
//    auto e = &ci; // e is const int*(& of a const object is low-level const)
//
//    const auto f = ci; // deduced type of ci is int; f has type const int
//    auto& g = ci; // g is a const int& that is bound to ci
//
//    a = 42; b = 42; c = 42; *d = 42; e = &c;
//
//    return 0;
//}

//PRAC 2.38
//int i = 0, &r = i;
//
////same
//auto x = i;
//decltype(i) y = i;
//
////c 为int, b为int&
//auto a = r;
//decltype(r) b = r;

//PRAC 2.40
//struct Sales_data
//{
//	std::string bookNomber;
//	std::string bookName;
//	unsigned unit_sold = 0;
//	double revenue = 0.0;
//	double price = 0.0;
//};

//PRAC 2.41
//#include "1/Sales_data.h"

//struct Sales_data
//{
//	std::string bookNomber;
//	std::string bookName;
//	unsigned units_sold = 0;
//	double revenue = 0.0;
//	double price = 0.0;
//};
//
//int main()
//{
//	Sales_data data1, data2;
//	double price = 0.0;
//
//	std::cin >> data1.bookNomber >> data1.units_sold >> price;
//	data1.revenue = data1.units_sold * price;
//	
//	std::cin >> data2.bookNomber >> data2.units_sold >> price;
//	data2.revenue = data2.units_sold * price;
//
//	if (data1.bookNomber == data2.bookNomber)
//	{
//		unsigned totalCount = data1.units_sold + data2.units_sold;
//		double totalRevenue = data1.revenue + data2.revenue;
//		
//		std::cout << data1.bookNomber << " " << totalCount << " " << totalRevenue << " ";
//		if (totalCount != 0)
//		{
//			std::cout << totalRevenue / totalCount << std::endl;
//		}
//		else
//		{
//			std::cout << "No sales" << std::endl;
//		}
//		return 0;
//	}
//	else
//	{
//		std::cerr << "Data must refer to be the same ISBN!" << std::endl;
//		return -1;
//	}
//}