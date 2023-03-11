#include <iostream>
#include <vector>

//PRAC 6.22
//// 交换指针本身，交换指针所指的内存地址
//void swap(int*& lft, int*& rht)
//{
//    int* tmp = lft;
//    lft = rht;
//    rht = tmp;
//}
//
////交换指针所指的值
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
//void print(const int(&ia)[10])//如果不加引用&，传入数组的长度将不被限制
// /*所以我们不能按值传递数组，当我们将数组传递给函数时，我们实际上是在传递一个指向数组第一个元素的指针。
//  在这道题中，const int ia[10]其实和const int*是一样的，数组的大小无关紧要。 
// 我们可以传递 const int ia[3] 或 const int ia[255]，没有区别。 
// 如果我们想传递一个大小为 10 的数组，我们应该像这样使用引用：*/
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
//char* init(int ht = 24, int wd, char bckgrnd);//默认实参不在形参列表的结尾

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