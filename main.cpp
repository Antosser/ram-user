#include <corecrt_malloc.h>
#include <thread>

int main(int argc, const char** argv) {
	while (true) {
		malloc(0x100000);
		std::this_thread::sleep_for(std::chrono::milliseconds(1));
	}
}