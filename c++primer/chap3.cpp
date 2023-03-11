#include <iostream>
#include <string>
#include <vector>

//PRAC 3.6
//int main()
//{
//	std::string input("Hello World!");
//	for (int i = 0; i <= input.size(); i++)
//	{
//		input[i] = 'x';
//	}
//	std::cout << input << std::endl;
//}
//int main()
//{
//	std::string s("Hello World!");
//	for (auto& a : s)//如果用char替换auto&，则字符串s不会被x替换
//	{
//		a = 'x';
//	}
//	std::cout << s << std::endl;
// }

//PRAC 3.8
//int main()
//{
//	std::string s("Hello World!");
//	//decltype(s.size()) i = 0;
//	auto i = 0;
//	while (i < s.size())
//	{
//		s[i++] = 'x';
//	}
//	std::cout << s << std::endl;
//}

//PRAC 3.10
//int main()
//{
//	std::string str("Hello, World,!");
//	for (auto x : str)
//	{
//		if (!ispunct(x))
//		{
//			std::cout << x;
//		}
//	}
//}
//using std::string;
//using std::cout;
//using std::cin;
//using std::endl;
//
//int main()
//{
//    cout << "Enter a string of characters including punctuation." << endl;
//    for (string s; getline(cin, s); cout << endl)
//        for (auto i : s)
//            if (!ispunct(i)) cout << i;
//
//    return 0;
//}

//PRAC 3.14
//int main()
//{
//	std::vector<int> v1;
//	int x;
//	while (std::cin >> x)
//	{
//		v1.push_back(x);
//	}
//	for (auto& a : v1)
//		std::cout << a << std::endl;
//}

//PRAC 3.15
//int main()
//{
//	std::vector<std::string> v1;
//	std::string x;
//	while (std::cin >> x)
//	{
//		v1.push_back(x);
//	}
//	for (auto& a : v1)
//		std::cout << a << std::endl;
//}

//PRAC 3.16
//int main()
//{
//	std::vector<int> v1;
//	std::cout << v1.size() << std::endl;
//	for (auto& x : v1)
//		std::cout << x << " ";
//	std::cout << std::endl;
//
//	std::vector<int> v2(10);
//	std::cout << v2.size() << std::endl;
//	for (auto& x : v2)
//		std::cout << x << " ";
//	std::cout << std::endl;
//
//	std::vector<int> v3(10, 42);
//	std::cout << v3.size() << std::endl;
//	for (auto& x : v3)
//		std::cout << x << " ";
//	std::cout << std::endl;
//
//	std::vector<int> v4{ 10 };
//	std::cout << v4.size() << std::endl;
//	for (auto& x : v4)
//		std::cout << x << " ";
//	std::cout << std::endl;
//
//	std::vector<int> v5{ 10, 42 };
//	std::cout << v5.size() << std::endl;
//	for (auto& x : v5)
//		std::cout << x << " ";
//	std::cout << std::endl;
//
//	std::vector<std::string> v6{ 10 };
//	std::cout << v6.size() << std::endl;
//	for (auto& x : v6)
//		std::cout << x << " ";
//	std::cout << std::endl;
//
//	std::vector<std::string> v7{ 10, "hi" };
//	std::cout << v7.size() << std::endl;
//	for (auto& x : v7)
//		std::cout << x << " ";
//	std::cout << std::endl;
//}

//PRAC 3.17
//int main()
//{
//	std::vector<std::string> v1;
//	std::string str;
//	while (std::cin >> str)
//	{
//		v1.push_back(str);
//	}
//
//	for (auto& x : v1)
//	{
//		for (auto& y : x)
//		{
//			y = toupper(y);
//		}
//	}
//
//	for (auto& a : v1)
//	{
//		std::cout << a << std::endl;
//	}
//}
//using std::cin;
//using std::cout;
//using std::endl;
//using std::vector;
//using std::string;
//
//int main()
//{
//    vector<string> vec;
//    for (string word; cin >> word;
//        vec.push_back(word));
//    for (auto& str : vec) 
//        for (auto& c : str) 
//            c = toupper(c);
//
//    for (string::size_type i = 0; i != vec.size(); ++i)
//    {
//        if (i != 0 && i % 8 == 0) cout << endl;
//        cout << vec[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}

//PRAC 3.20
//int main()
//{
//	std::vector<int> v1;
//	int i;
//	while (std::cin >> i)
//		v1.push_back(i);
//
//	for (int j = 0; j != v1.size() - 1; j++)
//		std::cout << v1[j] + v1[j + 1] << std::endl;
//
//	std::cout << std::endl;
//
//	for (int j = 0; j != v1.size() / 2; j++)
//		std::cout << v1[j] + v1[v1.size() - 1 - j] << std::endl;
//		
//}

//PRAC 3.21
//void SaveVector(const std::vector<int>&);
//void SaveVector(const std::vector<std::string>&);
//
//int main()
//{
//	std::vector<int> vec1{ 1, 2, 3 };
//	SaveVector(vec1);
//
//	std::vector<std::string> vec2{ "Oct" };
//	SaveVector(vec2);
//}
//
//void SaveVector(const std::vector<int>& vec)
//{
//	for (auto it = vec.begin(); it != vec.end(); ++it)
//	{
//		std::cout << *it << std::endl;
//	}
//}
//
//void SaveVector(const std::vector<std::string>& vec)
//{
//	for (auto it = vec.begin(); it != vec.end(); ++it)
//	{
//		std::cout << *it << std::endl;
//	}
//}

//PRAC 3.23
//void Double(std::vector<int>&);
//
//int main()
//{
//	std::vector<int> vec{ 1,2,3,4,5,6,7,8,9,10 };
//	Double(vec);
//}
//
//void Double(std::vector<int>& vec)
//{
//	for (auto it = vec.begin(); it != vec.end(); ++it)
//	{
//		std::cout << 2 * *it << std::endl;
//	}
//}

//PRAC 3.31
//int main()
//{
//	int arr[10];
//	for (int i = 0; i != 10; ++i)
//	{
//		arr[i] = i;
//		std::cout << arr[i] << std::endl;
//	}
//}

//PRAC 3.32
//int main()
//{
//	std::vector<int> arr1(10);
//	std::vector<int> arr2(10);
//	for (int i = 0; i != 10; ++i)
//	{
//		arr1[i] = i;
//		std::cout << arr1[i] << std::endl;
//	}
//	for (auto x : arr1)
//	{
//		arr2[x] = x;
//		std::cout << arr2[x] << std::endl;
//	}
//}

//PRAC 3.35
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int* ptr = arr;
//	for (int i = 0; i != 5; ++i)
//	{
//		std::cout << arr[i] << std::endl;
//		*(ptr + i) = 0;
//		std::cout << *(ptr + i) << std::endl;
//	}
//}

//PRAC 3.36
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 1,2,3,4,0 };
//	std::vector<int> vec1{ 1,2,3,4,5 };
//	std::vector<int> vec2{ 1,2,3,4,5 };
//
//	for (int i = 0; i != 5; ++i)
//	{
//		if (arr1[i] == arr2[i])
//		{
//			std::cout << 0 << std::endl;
//			continue;
//		}
//		else
//			break;
//	}
//
//	if (vec1 == vec2)
//		std::cout << "Equal" << std::endl;
//}

//PRAC 3.41
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	std::vector<int> vec(std::begin(arr), std::end(arr));
//	for (auto& x : vec)
//		std::cout << x << std::endl;
//}

//PRAC 3.42
//int main()
//{
//	std::vector<int> vec = { 1,2,3,4,5 };
//	int arr[5];
//	for (int i = 0; i != vec.size(); ++i)
//	{
//		arr[i] = vec[i];
//		std::cout << arr[i] << std::endl;
//	}
//}

//PRAC 3.43
//int main()
//{
//	int arr[3][4] =
//	{
//		{1,2,3,4},
//		{5,6,7,8},
//		{9,10,11,12}
//	};
//
//	//range for
//	for (int(&i)[4] : arr)
//	{
//		for (int& j : i)
//			std::cout << j << "\t";
//		std::cout << std::endl;
//	}
//
//	//for
//	for (int i = 0; i != 3; ++i)
//	{
//		for (int j = 0; j != 4; ++j)
//			std::cout << arr[i][j] << "\t";
//		std::cout << std::endl;
//	}
//
//	//pointers
//	for (int(*i)[4] = arr; i != arr + 3; ++i)
//	{
//		for (int* j = *i; j != *i + 4; ++j)
//			std::cout << *j << "\t";
//		std::cout << std::endl;
//	}
//}

