#include <iostream>

void printArray(int A[], int n) {
    std::cout << "result array: ";
    for (int i = 0; i < n; i++) {
        std::cout << A[i] << " ";
    }
    std::cout << std::endl;
}

int removeDuplicate(int A[], int n) {
    int pos = 0;
    for (int i = 0; i < n; i++) {
        if (A[pos] != A[i]) {
            A[++pos] = A[i];
        }
    }
    printArray(A, pos+1);
    return pos + 1;
}

int main() {
    int a[] = {1, 2, 2, 3};
    // std::cout << sizeof(a) / sizeof(int) << std::endl;
    int res = removeDuplicate(a, 4);
    std::cout << "result: " << res << std::endl;
    return 0;
}
