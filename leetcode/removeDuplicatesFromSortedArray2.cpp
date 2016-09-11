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
[/Users/lichen06/workspace]$ cat removeDuplicatedFromSortedArray2.cpp
#include <vector>
#include <iostream>

int removeDuplicates(std::vector<int>& nums) {
	return distance(nums.begin(), unique(nums.begin(), nums.end()));
}

int main() {
	int a[] = {1, 2, 2, 3};
	std::vector<int> b(a, a + 4);
	int res = removeDuplicates(b);
	std::cout << "result: " << res << std::endl;
	return 0;
}
