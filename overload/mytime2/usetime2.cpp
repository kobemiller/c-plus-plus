#include <iostream>
#include "mytime2.h"

int main()
{
	Time wedding(4, 35);
	Time waxing(2, 47);
	Time total;
	Time diff;
	Time adjusted;

	std::cout << "wedding time = ";
	wedding.Show();
	std::cout << std::endl;

	std::cout << "waxing time = ";
	waxing.Show();
	std::cout << std::endl;

	std::cout << "total work time = ";
	total = wedding + waxing;		/*use operator + */
	total.Show();
	std::cout << std::endl;

	diff = wedding - waxing;		/*use operator - */
	std::cout << "wedding time - waxing time = ";
	diff.Show();
	std::cout << std::endl;

	adjusted = total * 1.5;			/*use operator * */
	std::cout << "adjusted work time = ";
	adjusted.Show();
	std::cout << std::endl;

	return 0;
}
