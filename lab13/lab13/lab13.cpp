#include <iostream>

int nthTerm(int n) {
    if (n == 1) {
        return 1;
    }
    else {
        return 3 * nthTerm(n - 1);
    }
}

int main() {
    setlocale(LC_ALL, "Ukrainian");
    int n;
    std::cout << "����i�� ����� ����� ����: ";
    std::cin >> n;

    int result = nthTerm(n);
    std::cout << "n-� ���� ����: " << result << std::endl;

    return 0;
}