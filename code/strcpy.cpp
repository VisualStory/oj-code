#include <iostream>
#include <assert.h>

char* copyStr(char *to, const char *from) {
	assert (to != NULL && from != NULL);
	char *p = to;
	while ((*p++ = *from++) != '\0')
		;
	return to;
}

int main() {
	const char *a = "Hello World!";
	char *b = new char();
	b = copyStr(b, a);
	std::cout << b << std::endl;
	return 0;
}
