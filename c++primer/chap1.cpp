#include <iostream>
#include <string>


//练习1.9
//int main()
//{
//	int i = 0, j = 50;
//	while (j < 101)
//	{
//		i += j;
//		j++;
//	}
//
//	std::cout << i << std::endl;
//
//	std::cin.get();
//}

//练习1.10
//int main()
//{
//	int i = 10;
//	while (i >= 0)
//	{
//		std::cout << i << std::endl;
//		i--;
//	}
//	
//	std::cin.get();
//}

//练习1.11
//int main()
//{
//	int i1 = 0, i2 = 0;
//	
//	std::cout << "输入两个整数：" << std::endl;
//	std::cin >> i1 >> i2 ;
//
//	if (i1 > i2)
//	{
//		while (i1 >= i2)
//		{
//			std::cout << i1 << std::endl;
//			i1--;
//		}
//	}
//	else
//	{
//		while (i1 <= i2)
//		{
//			std::cout << i1 << std::endl;
//			i1++;
//		}
//	}
//	
//}

//练习1.12
//int main()
//{
//	int sum = 0;
//	for (int i = -100; i <= 100; ++i)
//		sum += i;
//
//	std::cout << sum << std::endl;
//	std::cin.get();
//}

//练习1.13
//int main()
//{
//	//1.9
//	int sum = 0;
//
//	for (int i = 50; i < 101; i++)
//	{
//		sum += i;
//	}
//	std::cout << sum << std::endl;
//	std::cout << "------------------" << std::endl;
//
//	//1.10
//	for (int i = 10; i >= 0; i--)
//	{
//		std::cout << i << std::endl;
//	}
//	std::cout << "------------------" << std::endl;
//
//	//1.11
//	std::cout << "输入两个整数：" << std::endl;
//
//	int i1 = 0, i2 = 0;
//	std::cin >> i1 >> i2;
//
//	if (i1 > i2)
//	{
//		for (i1; i1 >= i2; i1--)
//		{
//			std::cout << i1 << std::endl;
//		}
//	}
//	else
//	{
//		for (i1; i1 <= i2; i1++)
//		{
//			std::cout << i1 << std::endl;
//		}
//	}
//
//}

//PRAC 1.16
//int main()
//{
//	int sum = 0;
//	for (int val = 0; std::cin >> val; )
//	{
//		sum += val;// 按下Ctrl + z后在按回车，结束输入
//	}
//	std::cout << sum << std::endl;
//}

//PRAC 1.17
//int main()
//{
//	int currVal = 0, val = 0;
//	if (std::cin >> currVal)
//	{
//		int cnt = 1;
//		while (std::cin >> val)
//		{
//			if (val == currVal)
//			{
//				++cnt;
//			}
//			else
//			{
//				std::cout << currVal << " occurs " << cnt << " times" << std::endl;
//				currVal = val;
//				cnt = 1;
//			}
//		}
//		std::cout << currVal << " occurs " << cnt << " times" << std::endl;
//	}
//	return 0;
//}

//PRAC 1.20
//#include "1/Sales_item.h"
//
//int main()
//{
//	Sales_item book;
//	std::cin >> book;
//	std::cout << book << std::endl;
//}

//PRAC 1.21
//#include "1/Sales_item.h"
//
//int main()
//{
//	Sales_item item1, item2;
//	std::cin >> item1 >> item2;
//	std::cout << item1 + item2 << std::endl;
//}

//PRAC 1.22
//#include "1/Sales_item.h"
//
//int main()
//{
//	Sales_item item1, item2;
//	for (item1; std::cin >> item1; )
//	{
//		item2 += item1;
//	}
//	std::cout << "Sales_item sum is: " << item2 << std::endl;
//}

//PRAC 1.23
//#include "1/Sales_item.h"
//
////0-201-78345-X 3 20.00
//
//int main()
//{
//	Sales_item currItem, item;
//	if (std::cin >> currItem)
//	{
//		int count = 1;
//		while (std::cin >> item)
//		{
//			if (item.isbn() == currItem.isbn())
//			{
//				++count;
//			}
//			else
//			{
//				std::cout << currItem << " occurs " << count << " times" << std::endl;
//				currItem = item;
//				count = 1;
//			}
//		}
//		std::cout << currItem << " occurs " << count << " times" << std::endl;
//	}
//}

//PRAC 1.25
//#include "1/Sales_item.h"
//
////0-201-78345-X 3 20.00
//
//int main()
//{
//	Sales_item total, trans;
//	if (std::cin >> total)
//	{
//		while (std::cin >> trans)
//		{
//			if (total.isbn() == trans.isbn())
//			{
//				total += trans;
//			}
//			else
//			{
//				std::cout << total << std::endl;
//				total = trans;
//			}
//		}
//		std::cout << total << std::endl;
//	}
//}