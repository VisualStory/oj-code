#include <iostream>

int lenofstr(const char *str) {
	const char *s;
	for (s = str; *s; s++) {
		//std::cout << *s << std::endl;
	}
	return (s - str);
}

int main() {
	const char *s = "hello world!";
	std::cout << "result:" << lenofstr(s) << std::endl;
	return 0;
}
