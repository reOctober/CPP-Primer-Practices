#include <iostream>
#include <vector>

//PRAC 6.22
//// ����ָ�뱾������ָ����ָ���ڴ��ַ
//void swap(int*& lft, int*& rht)
//{
//    int* tmp = lft;
//    lft = rht;
//    rht = tmp;
//}
//
////����ָ����ָ��ֵ
//void swap2(int* lft, int* rht)
//{
//    int temp = *lft;
//    *lft = *rht;
//    *rht = temp;
//}
//
//int main()
//{
//    int i = 42, j = 99;
//    int* lft = &i;
//    int* rht = &j;
//    swap(lft, rht);
//    std::cout << *lft << " " << *rht << std::endl;
//
//    swap2(lft, rht);
//    std::cout << *lft << " " << *rht << std::endl;
//
//    return 0;
//}

//PRAC 6.24
//void print(const int(&ia)[10])//�����������&����������ĳ��Ƚ���������
// /*�������ǲ��ܰ�ֵ�������飬�����ǽ����鴫�ݸ�����ʱ������ʵ�������ڴ���һ��ָ�������һ��Ԫ�ص�ָ�롣
//  ��������У�const int ia[10]��ʵ��const int*��һ���ģ�����Ĵ�С�޹ؽ�Ҫ�� 
// ���ǿ��Դ��� const int ia[3] �� const int ia[255]��û������ 
// ��������봫��һ����СΪ 10 �����飬����Ӧ��������ʹ�����ã�*/
//{
//	for (size_t i = 0; i != 10; ++i)
//		std::cout << ia[i] << std::endl;
//}
//
//int main()
//{
//	int ia[9] = { 1,2,3,4,5,6,7,8,9 };
//	print(ia);
//}

//PRAC 6.25
//int main()
//{
//	std::string str1, str2, str;
//	std::cin >> str1 >> str2;
//	str = str1 + str2;
//	std::cout << str << std::endl;
//}

//PRAC 6.33
//void PrintVector(std::vector<int>::const_iterator, std::vector<int>::const_iterator);
//
//int main()
//{
//	std::vector<int> vec{ 1,2,3,4,5,6,7,8,9,10 };
//	PrintVector(vec.begin(), vec.end());
//}
//
//void PrintVector(std::vector<int>::const_iterator first, std::vector<int>::const_iterator last)
//{
//	if (first != last)
//	{
//		std::cout << *first << std::endl;
//		PrintVector(++first, last);
//	}
//}

//PRAC 6.40
//char* init(int ht = 24, int wd, char bckgrnd);//Ĭ��ʵ�β����β��б�Ľ�β

//PRAC 6.47
//void PrintVector(std::vector<int>&);
//
//int main()
//{
//	std::vector<int> vec{ 1,2,3,4,5,6,7,8,9,10 };
//	PrintVector(vec);
//}
//
//void PrintVector(std::vector<int>& vec)
//{
//#ifndef NDEBUG
//	std::cout << vec.size() << std::endl;
//#endif
//	if (!vec.empty())
//	{
//		int& temp = vec.back();
//		vec.pop_back();
//		PrintVector(vec);
//		std::cout << temp << std::endl;
//	}
//}

//PRAC 6.54
//int ReturnInt(int, int);
//
//int main()
//{
//	int a, b;
//	std::vector<decltype(ReturnInt)*> vec;
//}

//PRAC 6.55 6.56
//int Sum(int, int);
//int Subtract(int, int);
//int Multiply(int, int);
//int Divide(int, int);
//
//int main()
//{
//	std::vector<decltype(Sum)*> vec = {Sum, Subtract, Multiply, Divide};
//
//	for (auto x : vec)
//	{
//		std::cout << x(2, 4) << std::endl;
//	}
//}
//
//int Sum(int a, int b)
//{
//	return a + b;
//}
//
//int Subtract(int a, int b)
//{
//	return a - b;
//}
//
//int Multiply(int a, int b)
//{
//	return a * b;
//}
//
//int Divide(int a, int b)
//{
//	return a / b;
//}