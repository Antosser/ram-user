#include <iostream>
#include <vector>
#include <thread>

void trd(std::vector<char>& vect);

int main(int argc, char* argv[]) {
	std::vector<char> mem;
	std::thread t1(trd, std::ref(mem));

	std::cout << "Max size: " << (float)mem.max_size() / 1000000000 << " gigabytes.\n";

	while (true) {
			mem.push_back(0x00);
	}

	
	//std::cin.get();
}

void trd(std::vector<char>& vect) {
	while (true) {
		std::cout << "Allocated " << (float)vect.size() / 1000000000 << " gigabytes.\n";
		std::this_thread::sleep_for(std::chrono::milliseconds(250));
	}
}