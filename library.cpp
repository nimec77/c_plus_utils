#include "library.h"
#include <cstring>
#include <iostream>

using namespace std;

int main() {
    system("chcp 65001");

    cout << "Test Add: " << add(40, 2) << endl;

    string str = "Hello! И по русски!";
    const char *result = copy_str(str.c_str());
    cout << "Test ReverseStr " << result << endl;
//    free_buf((void *) result);
}

void hello() {
    cout << "Hello, World!" << endl;
}

int add(int a, int b) {
    cout << "add: " << a << " + " << b << endl;

    return a + b;
}

char *copy_str(const char *c) {
    string str(c);

    cout << "copy_str: " << str << endl;

    const auto length = strlen(c);
    char *buf = new char[length];

    copy(str.begin(), str.end(), buf);
    buf[length] = '\0';

    return buf;
}

void free_buf(void *pointer) {
    cout << "free_buff: " << pointer << endl;
    free(pointer);
}
