#include <iostream>
#include <vector>
#include <thread>

int main(int argc, char* argv[]) {
	while (true) {
		malloc(0x100000);
	}
}