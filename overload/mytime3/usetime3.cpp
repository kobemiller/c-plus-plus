#include <iostream>
#include "mytime3.h"

int main()
{
	Time aida(3, 35);
	Time tosca(2, 48);
	Time temp;

	std::cout << "aida and tosca:\n";
	std::cout << aida << "; " << tosca << std::endl;
	temp = aida + tosca;
	std::cout << "aida + tosca: " << temp << std::endl;
	temp = aida * 1.17;
	std::cout << "aida * 1.17: " << temp << std::endl;
	std::cout << "10 * tosca: " << 10 * tosca << std::endl;

	return 0;
}
