#include <iostream>
#include <string>

//PRAC 7.4 7.5 7.14
//class Person
//{
//private:
//	std::string m_Name;
//	std::string m_Address;
//public:
//	Person()
//		:m_Name("Oct"), m_Address("xxx-xxx-xxx") {};
//
//	std::string name = m_Name;
//	std::string address = m_Address;
//
//	std::string print() const
//	{
//		std::cout << name << ' ' << address << std::endl;
//		return name, address;
//	}
//};
//
//int main()
//{
//	Person person;
//	person.print();
//}

//PRAC 7.23 7.24 7.27
//class Screen
//{
//	using pos = std::string::size_type;
//private:
//	pos m_cursor = 0;
//	pos m_height = 0;
//	pos m_width = 0;
//	std::string m_contents;
//
//private:
//	void do_display(std::ostream& os) const
//	{
//		os << m_contents;
//	}
//
//public:
//	Screen() = default;
//	Screen(pos ht, pos wd)
//		:m_height(ht), m_width(wd), m_contents(ht* wd, ' ') {}
//	Screen(pos ht, pos wd, char c)
//		:m_height(ht), m_width(wd), m_contents(ht* wd, c) {}
//
//	inline Screen& set(char);
//	inline Screen& move(pos, pos);
//
//	char get()const
//	{
//		return m_contents[m_cursor];
//	}
//
//	const Screen& display(std::ostream& os) const
//	{
//		do_display(os);
//		return *this;
//	}
//
//	Screen& display(std::ostream& os)
//	{
//		do_display(os);
//		return *this;
//	}
//};
//
//inline Screen& Screen::set(char c)
//{
//	m_contents[m_cursor] = c;
//	return *this;
//}
//
//inline Screen& Screen::move(pos h, pos w)
//{
//	m_cursor = h * m_width + w;
//	return *this;
//}
//
//int main()
//{
//	Screen myScreen(5, 5, 'X');
//	myScreen.move(4, 0).set('#').display(std::cout);
//	std::cout << "\n";
//	myScreen.display(std::cout);
//	std::cout << "\n";
//}

//PRAC 7.31
//class X
//{
//public:
//	Y *y;
//};
//
//class Y
//{
//	X x;
//};

//PRAC 7.32
//class Screen
//{
//	friend Window_mgr& Window_mgr::clear();
//};
//
//class Window_mgr
//{
//	Window_mgr& clear() {};
//};

