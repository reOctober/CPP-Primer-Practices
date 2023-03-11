#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <deque>
#include <forward_list>

//PRAC 9.2
//std::list<std::deque<int>> Obj;

//PRAC 9.4
//bool FindInt(std::vector<int>&, int&);
//
//int main()
//{
//	std::vector<int> vec{ 1,2,3,4,5 };
//	int a = 3;
//	bool b = FindInt(vec, a);
//	std::cout << b << std::endl;
//}
//
//bool FindInt(std::vector<int>& vec, int& a)
//{
//	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
//	{
//		if (a == *it)
//		{
//			return true;
//			break;
//		}
//	}
//	return false;
//}

//PRAC 9.14
//int main()
//{
//	std::list<const char*> lst = { "Oct" };
//	std::vector<std::string> vec;
//	vec.assign(lst.cbegin(), lst.cend());
//}

//PRAC 9.15
//int main()
//{
//	std::vector<int> vec1{ 1,2,3,4,5 };
//	std::vector<int> vec2{ 0,2,3,4,5 };
//
//		std::cout << ((vec1 == vec2)?true:false) << std::endl;
//}

//PRAC 9.16
//int main()
//{
//	std::vector<int> vec1{ 1,2,3,4,5 };
//	std::list<int> list1{ 1,2,3,4,5 };
//
//	std::cout << ((vec1[0] == *list1.begin())?true:false) << std::endl;
//}

//PRAC 9.18
//int main()
//{
//	std::string str;
//	std::deque<std::string> deq;
//	while (std::cin >> str)
//		deq.push_back(str);
//	for (std::deque<std::string>::iterator it = deq.begin(); it != deq.end(); ++it)
//		std::cout << *it << std::endl;
//}

//PRAC 9.19
//int main()
//{
//	;
//	std::list<std::string> lis;
//	for (std::string str; std::cin >> str; lis.push_back(str));
//	for (auto iter = lis.cbegin(); iter != lis.cend(); ++iter)
//		std::cout << *iter << std::endl;
//}

//PRAC 9.20
//int main()
//{
//	std::list<int> lis{ 1,2,3,4,5,6,7,8,9,10 };
//	std::deque<int> odd, even;
//	for (auto& x : lis)
//		(x & 0x01 ? odd : even).push_back(x);//将x换成二进制与 00000001（0x01）进行 与（&）运算
//	/*for (auto iter = lis.cbegin(); iter != lis.cend(); ++iter)
//	{
//		if ((*iter) % 2 == 1)
//			odd.push_back(*iter);
//		else
//			even.push_back(*iter);
//	}*/
//	for (auto& x : odd)
//		std::cout << x << std::endl;
//	std::cout << std::endl;
//	for (auto& x : even)
//		std::cout << x << std::endl;
//}

// PRAC 9.26
//int main()
//{
//	int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
//	std::vector<int> vec(ia, std::end(ia));
//	std::list<int> lis(ia, std::end(ia));
//
//	for (auto& x : lis)
//		std::cout << x << "\t";
//	std::cout << std::endl;
//	for (auto& x : vec)
//		std::cout << x << "\t";
//	std::cout << std::endl;
//
//	for (auto iter = lis.begin(); iter != lis.end(); )
//	{
//		if (*iter % 2 == 1)//odd *iter % 2 == 1 , *iter & 0x01
//			iter = lis.erase(iter);
//		else
//			++iter;
//	}
//
//	for (auto iter = vec.begin(); iter != vec.end(); )
//	{
//		if (*iter % 2 == 0)//even *iter % 2 == 0 , !(*iter & 0x01)
//			iter = vec.erase(iter);
//		else
//			++iter;
//	}
//
//	for (auto i: lis)
//		std::cout << i << "\t";
//	std::cout << std::endl;
//	for (auto& x : vec)
//		std::cout << x << "\t";
//}

//using std::vector; using std::list; using std::cout; using std::endl; using std::end;
//
//int main()
//{
//    int ia[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89 };
//
//    // init
//    vector<int> vec(ia, end(ia));
//    list<int> lst(vec.begin(), vec.end());
//
//    // remove odd value
//    for (auto it = lst.begin(); it != lst.end(); )
//        if (*it & 0x1) it = lst.erase(it);
//        else ++it;
//
//    // remove even value
//    for (auto it = vec.begin(); it != vec.end(); )
//        if (!(*it & 0x1)) it = vec.erase(it);
//        else ++it;
//
//    // print
//    cout << "list : ";
//    for (auto i : lst)   cout << i << " ";
//    cout << "\nvector : ";
//    for (auto i : vec)   cout << i << " ";
//    cout << std::endl;
//
//    return 0;
//}

//PRAC 9.27
//using std::forward_list;
//using std::cout;
//
//auto remove_odds(forward_list<int>& flist)
//{
//    auto is_odd = [](int i) { return i & 0x1; };
//    flist.remove_if(is_odd);
//}
//
//int main()
//{
//    forward_list<int> data = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//    remove_odds(data);
//    for (auto i : data)
//        cout << i << " ";
//
//    return 0;
//}

//void odd(std::forward_list<int>&);
//
//int main()
//{
//	std::forward_list<int> fl{ 1,2,3,4,5,6,7,8,9,10 };
//	odd(fl);
//}
//
//void odd(std::forward_list<int>& fl)
//{
//	std::forward_list<int>::iterator prev = fl.before_begin();
//	std::forward_list<int>::iterator curr = fl.begin();
//
//	while (curr != fl.end())
//	{
//		if (*curr % 2 == 1)
//		{
//			curr = fl.erase_after(prev);
//		}
//		else
//		{
//			prev = curr;
//			++curr;
//		}
//	}
//	for (auto& x : fl)
//		std::cout << x << "\t";
//}

//PRAC 9.28
//void func(std::forward_list<std::string>&, const std::string&, const std::string&);
//
//int main()
//{
//	std::forward_list<std::string> fl{ "Oct", "asd", "sdf", "dfg" };
//	const std::string str1 = "wer", str2 = "qwe";
//
//	for (auto& x : fl)
//		std::cout << x << "\t";
//	std::cout << std::endl;
//	func(fl, str1, str2);
//}
//
//void func(std::forward_list<std::string>& fl, const std::string& str1, const std::string& str2)
//{
//	std::forward_list<std::string>::iterator prev = fl.before_begin();
//	std::forward_list<std::string>::iterator curr = fl.begin();
//
//	while (curr != fl.end())
//	{
//		if (*curr == str1)
//		{
//			fl.insert_after(curr, str2);
//			break;
//		}
//		else
//		{
//			prev = curr;
//			++curr;
//		}
//	}
//	fl.insert_after(prev, str2);
//
//	for (auto& x : fl)
//		std::cout << x << "\t";
//}

//PRAC 9.38
//using namespace std;
//
//int main()
//{
//	vector<int> v;
//
//	for (int i = 0; i < 512; i++)
//	{
//		cout << "capacity: " << v.capacity() << "  size: " << v.size() << endl;
//		v.push_back(i);
//	}
//	return 0;
//}
//PRAC 9.41
//int main()
//{
//	std::vector<char> vec = { 'O', 'c', 't', 'o', 'b', 'e', 'r' };
//	std::string str (vec.cbegin(), vec.cend());
//	std::cout << str << std::endl;
//}

//PRAC 9.43
//void change(std::string& s, const std::string& oldVal, const std::string& newVal);
// 
//int main()
//{
//	std::string s{ "To drive straight thru is a foolish, tho courageous act." };
//	std::string oldVal = "tho";
//	std::string newVal = "though";
//	change(s, "tho", "though");
//	change(s, "thru", "through");
//}
//
//void change(std::string& s,const std::string& oldVal,const std::string& newVal)
//{
//	for (auto it = s.begin(); it <= s.end() - oldVal.size(); )
//	{
//		if (oldVal == std::string{ it, it + oldVal.size() })
//		{
//			it = s.erase(it, it + oldVal.size());
//			it = s.insert(it, newVal.begin(), newVal.end());
//			it += newVal.size();
//		}
//		else
//			++it;
//	}
//	std::cout << s << std::endl;
//}

//PRAC 9.44
//void change(std::string& s, const std::string& oldVal, const std::string& newVal);
//
//int main()
//{
//	std::string s{ "To drive straight thru is a foolish, tho courageous act." };
//	std::string oldVal = "tho";
//	std::string newVal = "though";
//	change(s, "tho", "though");
//	change(s, "thru", "through");
//}
//
//void change(std::string & s, const std::string& oldVal, const std::string& newVal)
//{
//	for (size_t i = 0; i <= s.size() - oldVal.size(); )
//	{
//		if (s.substr(i, oldVal.size()) == oldVal)
//		{
//			s.replace(i, newVal.size(), newVal);
//			i += newVal.size();
//		}
//		else
//			++i;
//	}
//	std::cout << s << std::endl;
//}

//PRAC 9.51
//using namespace std;
//class My_date {
//private:
//    unsigned year, month, day;
//public:
//    My_date(const string& s) {
//
//        unsigned tag;
//        unsigned format;
//        format = tag = 0;
//
//        // 1/1/1900
//        if (s.find_first_of("/") != string::npos)
//        {
//            format = 0x01;
//        }
//
//        // January 1, 1900 or Jan 1, 1900
//        if ((s.find_first_of(',') >= 4) && s.find_first_of(',') != string::npos) {
//            format = 0x10;
//        }
//        else { // Jan 1 1900
//            if (s.find_first_of(' ') >= 3
//                && s.find_first_of(' ') != string::npos) {
//                format = 0x10;
//                tag = 1;
//            }
//        }
//
//        switch (format) {
//
//        case 0x01:
//            day = stoi(s.substr(0, s.find_first_of("/")));
//            month = stoi(s.substr(s.find_first_of("/") + 1, s.find_last_of("/") - s.find_first_of("/")));
//            year = stoi(s.substr(s.find_last_of("/") + 1, 4));
//
//            break;
//
//        case 0x10:
//            if (s.find("Jan") < s.size())  month = 1;
//            if (s.find("Feb") < s.size())  month = 2;
//            if (s.find("Mar") < s.size())  month = 3;
//            if (s.find("Apr") < s.size())  month = 4;
//            if (s.find("May") < s.size())  month = 5;
//            if (s.find("Jun") < s.size())  month = 6;
//            if (s.find("Jul") < s.size())  month = 7;
//            if (s.find("Aug") < s.size())  month = 8;
//            if (s.find("Sep") < s.size())  month = 9;
//            if (s.find("Oct") < s.size())  month = 10;
//            if (s.find("Nov") < s.size())  month = 11;
//            if (s.find("Dec") < s.size())  month = 12;
//
//            char chr = ',';
//            if (tag == 1) {
//                chr = ' ';
//            }
//            day = stoi(s.substr(s.find_first_of("123456789"), s.find_first_of(chr) - s.find_first_of("123456789")));
//
//            year = stoi(s.substr(s.find_last_of(' ') + 1, 4));
//            break;
//        }
//    }
//
//    void print() {
//        cout << "day:" << day << " " << "month: " << month << " " << "year: " << year;
//    }
//};
//int main()
//{
//    My_date d("Jan 1 1900");
//    d.print();
//    return 0;
//}

//PRAC 9.52
//#include <stack>
//using std::string; using std::cout; using std::endl; using std::stack;
//
//int main()
//{
//    string expression{ "This is (pezy)." };
//    bool bSeen = false;
//    stack<char> stk;
//    for (const auto& s : expression)
//    {
//        if (s == '(') { bSeen = true; continue; }
//        else if (s == ')') bSeen = false;
//
//        if (bSeen) stk.push(s);
//    }
//
//    string repstr;
//    while (!stk.empty())
//    {
//        repstr += stk.top();
//        stk.pop();
//    }
//
//    expression.replace(expression.find("(") + 1, repstr.size(), repstr);
//
//    cout << expression << endl;
//
//    return 0;
//}