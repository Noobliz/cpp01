
#include "Harl.hpp"

int main(int argc, char **argv){
	if (argc != 2)
	{
		std::cerr<<"input one level of debugging"<<std::endl;
		return 1;
	}
	Harl harl;
	harl.complain(argv[1]);
	return 0;
}