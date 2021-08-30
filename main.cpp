#include <corecrt_malloc.h>

int main() {
	while (true) {
		malloc(0x100000);
	}
}