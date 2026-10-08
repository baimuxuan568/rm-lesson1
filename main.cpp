#include <iostream>
using namespace std;

int main (int argc, char*argv[]) {

	if (argc!=2) {
		std::cerr<< "Usage:" << argv[0] << "\n";
		return 1;
	}
	std::cout << "Welcome," << argv[1] << "!\n";
	return 0;
}
