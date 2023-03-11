#include <iostream>
#include <string>
#include <vector>

//PRAC 5.14
//void MaxDuplicated(std::string&);
//
////how now now now brown cow cow
//
//int main()
//{
//	std::string str;
//	MaxDuplicated(str);
//}
//
//void MaxDuplicated(std::string& str)
//{
//	std::pair<std::string, int> MaxDuplicated;
//	int cnt = 0;
//
//	for (std::string prestr, str; std::cin >> str; prestr = str)
//	{
//		if (str == prestr)
//			++cnt;
//		else cnt = 0;
//		if (cnt > MaxDuplicated.second)
//			MaxDuplicated = { prestr, cnt };
//	}
//
//	if (MaxDuplicated.first.empty())
//		std::cout << "No duplicated string!" << std::endl;
//	else
//		std::cout << MaxDuplicated.first << ' ' << MaxDuplicated.second + 1 << std::endl;
//}

//PRAC 5.25
//using std::cin; using std::cout; using std::endl; using std::runtime_error;
//
//int main(void)
//{
//    for (int i, j; cout << "Input two integers:\n", cin >> i >> j; )
//    {
//        try
//        {
//            if (j == 0)
//                throw runtime_error("divisor is 0");
//            cout << i / j << endl;
//        }
//        catch (runtime_error err)
//        {
//            cout << err.what() << "\nTry again? Enter y or n" << endl;
//            char c;
//            cin >> c;
//            if (!cin || c == 'n')
//                break;
//        }
//    }
//
//    return 0;
//}

